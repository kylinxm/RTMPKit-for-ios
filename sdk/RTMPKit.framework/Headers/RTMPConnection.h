//
//  RTMPConnection.h
//  PlayKit
//
//  Created by kylin on 15/8/30.
//  Copyright (c) 2015年 kylin. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface RTMPConnection : NSObject


-(void) prepare;


-(int) connect;
-(int) connectStream:(int) seekTime;
-(void) setupURL:(NSString*) url;
    
-(void) write:(char*) buf count:(int) count;
-(int) read:(char*) buf count:(int) count;
-(int) sendMediaPacket: (int) packettype data:(uint8_t*) data datasize:(int) datasize timestamp:(int) timestamp;
-(void) setBufferMS:(int) size;
-(void) setLinkFlag:(int) flag;
-(void) setLinkTimeout:(int) timeout;
-(void) enableWrite;

-(void) close;
-(void) destroy;

@property (readonly)bool connected;
@property (readonly) NSString* url;
@property (readonly)void* handle;

@end


@interface RTMPInputStream: NSObject

-(instancetype) initWithConnection: (RTMPConnection *) connection;


-(char) readByte;
-(short) readInt16;
-(int) readInt24;
-(int) readInt32;
-(long long) readInt64;

-(NSData*) readData:(int) size;


@property RTMPConnection *connection;
@end

