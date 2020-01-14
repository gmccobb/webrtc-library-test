#if __has_include("RCTConvert.h")
#import "RCTConvert.h"
#import "RCTEventDispatcher.h"
#import "RCTUtils.h"
#else
#import <React/RCTConvert.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTUtils.h>
#endif
#import <WebRTC/RTCDataChannelConfiguration.h>
#import <WebRTC/RTCConfiguration.h>
#import <WebRTC/RTCIceServer.h>
#import <WebRTC/RTCSessionDescription.h>
#import <WebRTC/RTCIceCandidate.h>

@interface RCTConvert (WebRTC)

+ (RTCIceCandidate *)RTCIceCandidate:(id)json;
+ (RTCSessionDescription *)RTCSessionDescription:(id)json;
+ (RTCIceServer *)RTCIceServer:(id)json;
+ (RTCDataChannelConfiguration *)RTCDataChannelConfiguration:(id)json;
+ (RTCConfiguration *)RTCConfiguration:(id)json;

@end
