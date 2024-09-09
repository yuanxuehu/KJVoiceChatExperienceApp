#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AgoraComponetLog.h"
#import "AgoraComponetConsoleLogger.h"
#import "AgoraComponetFileLogger.h"
#import "AgoraComponetLogProtocol.h"

FOUNDATION_EXPORT double AgoraComponetLogVersionNumber;
FOUNDATION_EXPORT const unsigned char AgoraComponetLogVersionString[];

