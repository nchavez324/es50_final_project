//
//  PTWiimoteProtocol.h
//  Unity-iPhone
//
//  Created by Nick Chavez on 12/6/15.
//
//

#ifndef PTWiimoteProtocol_h
#define PTWiimoteProtocol_h

#import <Foundation/Foundation.h>
#include <stdint.h>

static const int PTWiimoteProtocolIPv4PortNumber = 2345;

enum {
    PTWiimoteFrameTypeDeviceInfo = 100,
    PTWiimoteFrameTypeTextMessage = 101,
    PTWiimoteFrameTypePing = 102,
    PTWiimoteFrameTypePong = 103,
};

typedef struct _PTWiimoteTextFrame {
    uint32_t length;
    uint8_t utf8text[0];
} PTWiimoteTextFrame;


static dispatch_data_t PTWiimoteTextDispatchDataWithString(NSString *message) {
    // Use a custom struct
    const char *utf8text = [message cStringUsingEncoding:NSUTF8StringEncoding];
    size_t length = strlen(utf8text);
    PTWiimoteTextFrame *textFrame = CFAllocatorAllocate(nil, sizeof(PTWiimoteTextFrame) + length, 0);
    memcpy(textFrame->utf8text, utf8text, length); // Copy bytes to utf8text array
    textFrame->length = htonl(length); // Convert integer to network byte order
    
    // Wrap the textFrame in a dispatch data object
    return dispatch_data_create((const void*)textFrame, sizeof(PTWiimoteTextFrame)+length, nil, ^{
        CFAllocatorDeallocate(nil, textFrame);
    });
}



#endif /* PTWiimoteProtocol_h */
