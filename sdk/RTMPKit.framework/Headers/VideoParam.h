//
//  VideoParam.h
//  PlayKit
//
//  Created by kylin on 15/9/26.
//  Copyright (c) 2015年 kylin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VideoParam : NSObject<NSCopying>

@property int width;
@property int height;
@property int frameRate;
@property int bitRate;

@end
