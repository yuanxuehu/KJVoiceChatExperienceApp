//
//  EntLogger.h
//
//
//  Created by ZYP on 2023/9/25.
//

#import <Foundation/Foundation.h>
#import "AgoraComponetLogProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface AgoraComponetLog : NSObject

/// old method
+ (void)setLoggers:(NSArray<id<AgoraComponetLogger>> *)loggers __attribute__((deprecated("请使用新的API")));
+ (void)errorWithText:(NSString *)text tag:(NSString * _Nullable)tag __attribute__((deprecated("请使用新的API")));
+ (void)infoWithText:(NSString *)text tag:(NSString * _Nullable)tag __attribute__((deprecated("请使用新的API")));
+ (void)debugWithText:(NSString *)text tag:(NSString * _Nullable)tag __attribute__((deprecated("请使用新的API")));
+ (void)warningWithText:(NSString *)text tag:(NSString * _Nullable)tag __attribute__((deprecated("请使用新的API")));

/// new method
- (instancetype)initWithQueueTag:(NSString *)queueTag;
- (void)configLoggers:(NSArray<id<AgoraComponetLogger>> *)loggers;
- (void)errorWithText:(NSString *)text tag:(NSString * _Nullable)tag;
- (void)infoWithText:(NSString *)text tag:(NSString * _Nullable)tag;
- (void)debugWithText:(NSString *)text tag:(NSString * _Nullable)tag;
- (void)warningWithText:(NSString *)text tag:(NSString * _Nullable)tag;
- (instancetype)init __attribute__((unavailable("Use create instead")));
@end

NS_ASSUME_NONNULL_END
