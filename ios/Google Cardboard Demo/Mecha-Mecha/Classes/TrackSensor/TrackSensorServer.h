//
//  TrackSensorServer.h
//  Unity-iPhone
//
//  Created by Nick Chavez on 11/15/15.
//
//

#import <Foundation/Foundation.h>

BOOL NativeHeadTrackingStart();
BOOL NativeHeadTrackingEnd();

@interface TrackSensorServer : NSObject

+ (TrackSensorServer *)sharedServer;

- (BOOL)startTracking;
- (BOOL)endTracking;
- (void)unityDebugMessage:(NSString *)message;

@end
