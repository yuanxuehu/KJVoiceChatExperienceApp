//
//  AgoraComponetConsoleLogger.h
//  AgoraComponetLogger
//
//  Created by ZYP on 2023/12/6.
//

#import <Foundation/Foundation.h>
#import "AgoraComponetLogProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface AgoraComponetConsoleLogger : NSObject <AgoraComponetLogger>

- (instancetype)initWithDomainName:(NSString *)domainName;
- (void)onLogWithContent:(NSString *)content
                     tag:(NSString * _Nullable)tag
                    time:(NSString *)time
                   level:(AgoraComponetLoggerLevel)level;

@end

NS_ASSUME_NONNULL_END
