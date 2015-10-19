//
//  RTMPPublisher.h
//  PlayKit
//
//  Created by kylin on 15/8/30.
//  Copyright (c) 2015年 kylin. All rights reserved.
//

@import AVFoundation;
@import QuartzCore;

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RTMPConnection.h"
#import "RTMPStream.h"
#import "AudioParam.h"
#import "VideoParam.h"

@class RTMPPublisher;



typedef NS_ENUM(NSInteger, RTMPOrientation) {
    RTMPOrientation_Portrait           = 1,
    RTMPOrientation_PortraitUpsideDown = 2,
    RTMPOrientation_LandscapeRight     = 3,
    RTMPOrientation_LandscapeLeft      = 4,
};

@protocol RTMPPublisherDelegate <NSObject>

@required

@optional
-(void) onStarting:(RTMPPublisher*) sender;
-(void) onConnecting:(RTMPPublisher*) sender;
-(void) onConnected:(RTMPPublisher*) sender;
-(void) onError:(RTMPPublisher*) sender error:(NSException*) error;
-(void) onVideoStart:(RTMPPublisher*) sender;
-(void) onAudioStart:(RTMPPublisher*) sender;
-(void) onStopped:(RTMPPublisher*) sender;
@end

@interface RTMPPublisher : RTMPStream
{
    @package AudioParam* _audioParam;
    @package VideoParam* _videoRequestParam;
}

@property (nonatomic) UIView* view;



@property (nonatomic) BOOL micOn;
@property (nonatomic) BOOL flashligthOn;
@property (nonatomic) BOOL cameraOn;
@property id<RTMPPublisherDelegate> delegate;


-(void) setAudioParam:(int) sampleRateInHZ bitrate:(int) bitrate;
-(void) setVideoParam:(int) width height:(int) height frameRate:(int) frameRate bitRate:(int) bitRate;
-(void) setVideoOrientation:(RTMPOrientation) orientation;

-(void)switchCam;
-(void) startPreview;
-(void) stopPreview;
-(BOOL) startPublish;
-(void) stopPublish;
-(void) updatePreviewLayer;//View 改变位置后更新 layer
@end

