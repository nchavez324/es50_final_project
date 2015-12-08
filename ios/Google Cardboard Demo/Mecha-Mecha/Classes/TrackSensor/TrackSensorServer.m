//
//  TrackSensorServer.m
//  Unity-iPhone
//
//  Created by Nick Chavez on 11/15/15.
//
//

#import "PTChannel.h"
#import "PTWiimoteProtocol.h"
#import "TrackSensorServer.h"

BOOL NativeHeadTracking_iOS_Start() {

    NSLog(@"Got start in global function.");
    return [[TrackSensorServer sharedServer] startTracking];
}

void DebugMessage_iOS(const char * message) {
    
    unsigned long len = strlen(message);
    NSString *nsMessage = [[NSString alloc] initWithBytes:message length:len encoding:NSUTF8StringEncoding];
    [[TrackSensorServer sharedServer] unityDebugMessage:nsMessage];
}

BOOL NativeHeadTracking_iOS_End() {
    
    NSLog(@"Got end in global function.");
    return [[TrackSensorServer sharedServer] endTracking];
}

@interface TrackSensorServer () <PTChannelDelegate>

@property (weak, nonatomic) PTChannel *serverChannel;
@property (weak, nonatomic) PTChannel *peerChannel;

@end

@implementation TrackSensorServer

+ (TrackSensorServer *)sharedServer {
    
    static TrackSensorServer *sharedServer = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedServer = [[self alloc] init];
    });
    return sharedServer;
}

- (instancetype)init {
    
    if (self = [super init]) {
        
        [self initialize];
    }
    return self;
}

- (void)initialize {
    
    //[self sendDataToUnity:@"Test from iOS! :)"];
}

- (BOOL)startTracking {
    
    NSLog(@"Starting tracking in server!");
    
    // Create a new channel that is listening on our IPv4 port
    PTChannel *channel = [PTChannel channelWithDelegate:self];
    [channel listenOnPort:PTWiimoteProtocolIPv4PortNumber IPv4Address:INADDR_LOOPBACK callback:^(NSError *error) {
        if (error) {
            NSLog(@"Failed to listen on 127.0.0.1:%d: %@", PTWiimoteProtocolIPv4PortNumber, error);
        } else {
            NSLog(@"Listening on 127.0.0.1:%d", PTWiimoteProtocolIPv4PortNumber);
            self.serverChannel = channel;
        }
    }];
    
    return YES;
}

- (void)unityDebugMessage:(NSString *)message {
    
    [self sendUSBMessage:message];
}

- (void)sendUSBMessage:(NSString *)message {
    
    if (self.peerChannel) {
        
        dispatch_data_t payload = PTWiimoteTextDispatchDataWithString(message);
        [self.peerChannel sendFrameOfType:PTWiimoteFrameTypeTextMessage tag:PTFrameNoTag withPayload:payload callback:^(NSError *error) {
            if (error) {
                NSLog(@"Failed to send message: %@", error);
            } else {
                NSLog(@"[you]: %@", message);
            }
        }];
        
    } else {
        
        NSLog(@"Can not send message -- not connected.");
    }
}

- (void)sendDeviceInfo {
    if (!self.peerChannel) {
        return;
    }
    
    NSLog(@"Sending device info over %@", self.peerChannel);
    
    UIScreen *screen = [UIScreen mainScreen];
    CGSize screenSize = screen.bounds.size;
    NSDictionary *screenSizeDict = (__bridge_transfer NSDictionary*)CGSizeCreateDictionaryRepresentation(screenSize);
    UIDevice *device = [UIDevice currentDevice];
    NSDictionary *info = [NSDictionary dictionaryWithObjectsAndKeys:
                          device.localizedModel, @"localizedModel",
                          [NSNumber numberWithBool:device.multitaskingSupported], @"multitaskingSupported",
                          device.name, @"name",
                          (UIDeviceOrientationIsLandscape(device.orientation) ? @"landscape" : @"portrait"), @"orientation",
                          device.systemName, @"systemName",
                          device.systemVersion, @"systemVersion",
                          screenSizeDict, @"screenSize",
                          [NSNumber numberWithDouble:screen.scale], @"screenScale",
                          nil];
    dispatch_data_t payload = [info createReferencingDispatchData];
    [self.peerChannel sendFrameOfType:PTWiimoteFrameTypeDeviceInfo tag:PTFrameNoTag withPayload:payload callback:^(NSError *error) {
        if (error) {
            NSLog(@"Failed to send PTExampleFrameTypeDeviceInfo: %@", error);
        }
    }];
}

#pragma mark - PTChannelDelegate

// Invoked to accept an incoming frame on a channel. Reply NO ignore the
// incoming frame. If not implemented by the delegate, all frames are accepted.
- (BOOL)ioFrameChannel:(PTChannel*)channel shouldAcceptFrameOfType:(uint32_t)type tag:(uint32_t)tag payloadSize:(uint32_t)payloadSize {
    if (channel != self.peerChannel) {
        // A previous channel that has been canceled but not yet ended. Ignore.
        return NO;
    } else if (type != PTWiimoteFrameTypeTextMessage && type != PTWiimoteFrameTypePing) {
        NSLog(@"Unexpected frame of type %u", type);
        [channel close];
        return NO;
    } else {
        return YES;
    }
}

/*
 WM0*A=1&B=0&D=0&IR0=1024|1024&IR1=1024|1024&IR2=-1&IR3=-1&L=0&R=1&U=0&H=1;WM1*A=1&B=0&D=0&IR0=1024|1024&IR1=1024|1024&IR2=-1&IR3=-1&L=0&R=1&U=0&H=1
 */

// Invoked when a new frame has arrived on a channel.
- (void)ioFrameChannel:(PTChannel*)channel didReceiveFrameOfType:(uint32_t)type tag:(uint32_t)tag payload:(PTData*)payload {
    //NSLog(@"didReceiveFrameOfType: %u, %u, %@", type, tag, payload);
    if (type == PTWiimoteFrameTypeTextMessage) {
        PTWiimoteTextFrame *textFrame = (PTWiimoteTextFrame*)payload.data;
        textFrame->length = ntohl(textFrame->length);
        NSString *message = [[NSString alloc] initWithBytes:textFrame->utf8text length:textFrame->length encoding:NSUTF8StringEncoding];
        
        // Now send message to Unity
        [self sendDataToUnity:message];
        [self sendUSBMessage:message];
        
    } else if (type == PTWiimoteFrameTypePing && self.peerChannel) {
        [self.peerChannel sendFrameOfType:PTWiimoteFrameTypePong tag:tag withPayload:nil callback:nil];
    }
}

// Invoked when the channel closed. If it closed because of an error, *error* is
// a non-nil NSError object.
- (void)ioFrameChannel:(PTChannel*)channel didEndWithError:(NSError*)error {
    if (error) {
        NSLog(@"%@ ended with error: %@", channel, error);
    } else {
        NSLog(@"Disconnected from %@", channel.userInfo);
    }
}

// For listening channels, this method is invoked when a new connection has been
// accepted.
- (void)ioFrameChannel:(PTChannel*)channel didAcceptConnection:(PTChannel*)otherChannel fromAddress:(PTAddress*)address {
    // Cancel any other connection. We are FIFO, so the last connection
    // established will cancel any previous connection and "take its place".
    if (self.peerChannel) {
        [self.peerChannel cancel];
    }
    
    // Weak pointer to current connection. Connection objects live by themselves
    // (owned by its parent dispatch queue) until they are closed.
    self.peerChannel = otherChannel;
    self.peerChannel.userInfo = address;
    NSLog(@"Connected to %@", address);
    
    // Send some information about ourselves to the other end
    [self sendDeviceInfo];
}

- (void)sendDataToUnity:(NSString *)message {

    NSString *entireMessage = [NSString stringWithFormat:@"%@", message];
    
    UnitySendMessage("TrackSensorManagerObj", "HeadTrackUpdate", entireMessage.UTF8String);
}

- (BOOL)endTracking {
    
    NSLog(@"Ending tracking in server!");
    
    [self.serverChannel close];
    self.serverChannel = nil;
    
    return YES;
}

@end
