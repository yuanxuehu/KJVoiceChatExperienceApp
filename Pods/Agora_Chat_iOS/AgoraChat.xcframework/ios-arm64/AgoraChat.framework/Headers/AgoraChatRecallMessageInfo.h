//
//  AgoraChatRecallMessageInfo.h
//  AgoraChat
//
//  Created by zhangchong on 2022/1/20.
//  Copyright © 2022 easemob.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AgoraChatMessage.h"

/**
 *  
 *  The message recall information object.
 */
@interface AgoraChatRecallMessageInfo : NSObject

/*!
 *  
 *  Users who recall messages
 */
@property (nonatomic, copy) NSString * _Nonnull recallBy;

/*!
 *  
 *  A recall message
 */
@property (nonatomic, strong) AgoraChatMessage * _Nonnull recallMessage;

@end

