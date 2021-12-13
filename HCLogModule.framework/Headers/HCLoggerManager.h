//
//  HCLoggerManager.h
//  HondaConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/4/9.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>
#import "HCOssLogger.h"
#if TARGET_OS_IOS
#import <UIKit/UIKit.h>
#endif

//日志级别
#ifdef DEBUG
  static const int ddLogLevel = DDLogLevelVerbose;
#else
  static const int ddLogLevel = DDLogLevelInfo;
#endif


NS_ASSUME_NONNULL_BEGIN

@interface HCLoggerManager : NSObject

@property (nonatomic,copy) NSString *userId;
@property (nonatomic,copy) NSString *phoneNumber;
@property (nonatomic,copy) NSString *logName;
@property (nonatomic,copy) NSString *accessKey;
@property (nonatomic,copy) NSString *secretKey;
@property (nonatomic,copy) NSString *bucketName;
@property (nonatomic,copy) NSString *endpoint;
@property (nonatomic,copy) NSString *source;
@property (nonatomic,copy) NSString *platform;

+ (id)sharedInstance;

/**
 配置日志
 
 @param logName 日志文件名
 @param accessKey <#accessKey description#>
 @param secretKey <#secretKey description#>
 @param bucketName <#bucketName description#>
 @param endpoint <#endpoint description#>
 @param source 来源
 */
+ (void)configSDKLog:(NSString *)logName
           accessKey:(NSString *)accessKey
           secretKey:(NSString *)secretKey
          bucketName:(NSString *)bucketName
            endpoint:(NSString *)endpoint
              source:(NSString *)source;



@end

NS_ASSUME_NONNULL_END
