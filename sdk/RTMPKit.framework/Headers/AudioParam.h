//
//  AudioParam.h
//  PlayKit
//
//  Created by kylin on 15/9/26.
//  Copyright (c) 2015年 kylin. All rights reserved.
//
#import <Foundation/Foundation.h>


@interface AudioParam : NSObject

@property int sampleRate;
@property int sampleBitsize;
@property int channel;
@property int bitRate;
@end
