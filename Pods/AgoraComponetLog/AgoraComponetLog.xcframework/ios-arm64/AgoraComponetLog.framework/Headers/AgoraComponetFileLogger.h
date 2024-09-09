//
//  AgoraComponetFileLogger.h
//  AgoraComponetLogger
//
//  Created by ZYP on 2023/12/6.
//

#import <Foundation/Foundation.h>
#import "AgoraComponetLogProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface AgoraComponetFileLogger : NSObject <AgoraComponetLogger>

#pragma mark - public
/// init
/// - Parameters:
///   - logFilePath: custom file path, use default value if set nil
///   - filePrefixName: the prefixName of file, use default value if set nil
///   - maxFileSizeOfBytes: maxFileSize in every file
///   - maxFileCount: the number of file that save in local, no less than 2
///   - domainName: a flag of your domain
- (instancetype)initWithLogFilePath:(NSString * _Nullable)logFilePath
                     filePrefixName:(NSString * _Nullable)prefixName
                 maxFileSizeOfBytes:(uint64_t)maxFileSizeOfBytes
                       maxFileCount:(NSUInteger)maxFileCount
                         domainName:(NSString *)domainName;
- (instancetype)init __attribute__((unavailable("Use initWithLogFilePath instead")));
- (void)onLogWithContent:(NSString *)content
                     tag:(NSString * _Nullable)tag
                    time:(NSString *)time
                   level:(AgoraComponetLoggerLevel)level;

#pragma mark - only for unit test
/// ⚠️⚠️⚠️⚠️⚠️ this method only for unit test ⚠️⚠️⚠️⚠️⚠️
- (NSString *)makeFilePathAtNum:(NSUInteger)num;
/// ⚠️⚠️⚠️⚠️⚠️ this method only for unit test ⚠️⚠️⚠️⚠️⚠️
- (uint64_t)fileSizeWithPath:(NSString *)path;
/// ⚠️⚠️⚠️⚠️⚠️ this method only for unit test ⚠️⚠️⚠️⚠️⚠️
- (NSString *)getDefaultFilePath;
/// ⚠️⚠️⚠️⚠️⚠️ this method only for unit test ⚠️⚠️⚠️⚠️⚠️
- (instancetype)initWithLogFilePath:(NSString * _Nullable)logFilePath
                     filePrefixName:(NSString * _Nullable)prefixName
                 maxFileSizeOfBytes:(uint64_t)maxFileSizeOfBytes
                       maxFileCount:(NSUInteger)maxFileCount
                         domainName:(NSString *)domainName
              internalLogSaveInFile:(BOOL)internalLogSaveInFile;
@end

NS_ASSUME_NONNULL_END
