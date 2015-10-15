//
//  RTMPStream.h
//  PlayKit
//
//  Created by kylin on 15/8/30.
//  Copyright (c) 2015年 kylin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RTMPConnection.h"

/*
 * RTMP 数据流
 */
@interface RTMPStream : NSObject

@property NSString* url;
@property RTMPConnection* connection;


-(void) prepare;
-(void) start;
-(void) stop;
-(void) main;

-(void) onStarting;
-(void) onStopped;
-(void) onError:(NSException*) exception;

-(void) dispose;

@property (readonly) BOOL isRunning;
@property (readonly) BOOL canceled;
@end
