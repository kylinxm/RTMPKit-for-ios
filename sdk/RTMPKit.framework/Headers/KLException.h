//
//  KLException.h
//  RTMPKit
//
//  Created by kylin on 15/10/7.
//  Copyright © 2015年 kylin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KLException : NSException

@end


@interface KLRTMPException : KLException

@end

@interface KLCodecException : KLException

@end

@interface KLRenderExceptoin : KLException

@end