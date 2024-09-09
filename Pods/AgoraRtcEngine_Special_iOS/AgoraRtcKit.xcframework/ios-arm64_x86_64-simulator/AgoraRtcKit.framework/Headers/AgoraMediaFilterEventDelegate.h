//
//  AgoraMediaFilterEventDelegate.h
//  Agora SDK
//
//  Created by LLF on 2020-9-21.
//  Copyright (c) 2020 Agora. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AgoraExtensionContext : NSObject
/** Whether uid is valid.
 */
@property (assign, nonatomic) BOOL isValid;
/** Default 0 when "isValid is NO
 * Local user is 0 and remote user great than 0  when "isValid" is YES
 */
@property (assign, nonatomic) NSUInteger uid;
@property (copy, nonatomic) NSString * _Nullable providerName;
@property (copy, nonatomic) NSString * _Nullable extensionName;

@end

@protocol AgoraMediaFilterEventDelegate <NSObject>
@optional
/* Meida filter(audio filter or video filter) event callback
 */
- (void)onEvent:(NSString * __nullable)provider
      extension:(NSString * __nullable)extension
            key:(NSString * __nullable)key
          value:(NSString * __nullable)value NS_SWIFT_NAME(onEvent(_:extension:key:value:)) __deprecated_msg("override needExtensionContext, use onEventWithContext instead");

- (void)onExtensionStopped:(NSString * __nullable)provider
                 extension:(NSString * __nullable)extension NS_SWIFT_NAME(onExtensionStopped(_:extension:))
              __deprecated_msg("override needExtensionContext, use onExtensionStoppedWithContext instead");

- (void)onExtensionStarted:(NSString * __nullable)provider
                 extension:(NSString * __nullable)extension NS_SWIFT_NAME(onExtensionStarted(_:extension:))
                 __deprecated_msg("override needExtensionContext, use onExtensionStartedWithContext instead");

- (void)onExtensionError:(NSString * __nullable)provider
                 extension:(NSString * __nullable)extension
                     error:(int)error
                   message:(NSString * __nullable)message NS_SWIFT_NAME(onExtensionError(_:extension:error:message:))
                   __deprecated_msg("override needExtensionContext, use onExtensionErrorWithContext instead");

/** Whether need ExtensionContext, default NO if doesn't impl
 * 
 * recommend override for YES
 * return NO, then callback interface with onEvent、onExtensionStarted、onExtensionStopped、onExtensionError
 * return YES, then callback interface conterpart with *WithContext interface
 */
- (BOOL)needExtensionContext NS_SWIFT_NAME(needExtensionContext());//
 
- (void)onEventWithContext:(AgoraExtensionContext * __nonnull)context
            key:(NSString * __nullable)key
          value:(NSString * __nullable)value NS_SWIFT_NAME(onEventWithContext(_:key:value:));

- (void)onExtensionStartedWithContext:(AgoraExtensionContext * __nonnull)context NS_SWIFT_NAME(onExtensionStartedWithContext(_:));

- (void)onExtensionStoppedWithContext:(AgoraExtensionContext * __nonnull)context NS_SWIFT_NAME(onExtensionStoppedWithContext(_:));
 
- (void)onExtensionErrorWithContext:(AgoraExtensionContext * __nonnull)context
                   error:(int)error
                 message:(NSString * __nullable)message NS_SWIFT_NAME(onExtensionErrorWithContext(_:error:message:));
 
@end
