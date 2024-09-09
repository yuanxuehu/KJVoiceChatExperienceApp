//
//  AgoraComponetLogProtocol.h
//  AgoraComponetLogger
//
//  Created by ZYP on 2023/12/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AgoraComponetLoggerLevel) {
    AgoraComponetLoggerLevelDebug,
    AgoraComponetLoggerLevelInfo,
    AgoraComponetLoggerLevelWarning,
    AgoraComponetLoggerLevelError
};

@protocol AgoraComponetLogger <NSObject>
- (void)onLogWithContent:(NSString *)content
                     tag:(NSString * _Nullable)tag
                    time:(NSString *)time
                   level:(AgoraComponetLoggerLevel)level;
@end

NS_ASSUME_NONNULL_END
