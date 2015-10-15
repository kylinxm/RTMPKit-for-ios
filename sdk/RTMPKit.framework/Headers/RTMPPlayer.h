//
//  RTMPPlayer.h
//  PlayKit
//
//  Created by kylin on 15/8/30.
//  Copyright (c) 2015年 kylin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RTMPConnection.h"
#import "RTMPStream.h"
#import "AudioParam.h"
#import "VideoParam.h"

@class RTMPPlayer;

//播放委托
@protocol RTMPPlayerDelegate <NSObject>

@required

@optional
-(void) onStarting:(RTMPPlayer*) sender;
-(void) onConnecting:(RTMPPlayer*) sender;
-(void) onConnected:(RTMPPlayer*) sender;
-(void) onError:(RTMPPlayer*) sender error:(NSException*) error;
-(void) onVideoStart:(RTMPPlayer*) sender  videoParam:(VideoParam*) videoParam;
-(void) onAudioStart:(RTMPPlayer*) sender audioParam:(AudioParam*) audioParam;
-(void) onStopped:(RTMPPlayer*) sender;
@end


@interface RTMPPlayer : RTMPStream

@property BOOL enableVideo;
@property BOOL enableAudio;

@property (nonatomic)UIView* view;
@property id<RTMPPlayerDelegate> delegate;
@property (readonly)VideoParam* videoParam; //播放时才有值
@property (readonly)AudioParam* audioParam; //播放时才有值


-(void) updatePreviewLayer;//View 改变位置后更新 layer

@end


