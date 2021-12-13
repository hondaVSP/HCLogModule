//
//  HCLoggerWriteManager.h
//  HCLogModule
//
//  Created by Zac on 2021/6/29.
//

#import <Foundation/Foundation.h>



NS_ASSUME_NONNULL_BEGIN

/**
 日志类型
*/
typedef NS_ENUM(NSUInteger, HCLogType) {
    HCLogNone,
    HCLogNetWork, //网络日志
    HCLogCrash, //崩溃日志
    HCLogBle, //蓝牙日志
    HCLogVehicleControl, //控车日志
    HCLogWatch, //手表日志
    HCLogOther  =  99//其他日志
};

typedef NS_ENUM(NSUInteger, HCLogLevel) {
    HCLogLevelNone,
    HCLogLevelDebug, //调试
    HCLogLevelInfo, //信息
    HCLogLevelWarn, //警告
    HCLogLevelError, //错误
};



@interface HCLoggerIOManager : NSObject


/**
 日志写入
 @param logType 日志类型
 @param logLevel 日志等级
 @param userId 用户id
 @param phoneNumber 用户手机号
 @param data 参数类型
 @param successBlock <#successBlock description#>
 @param errorBlock <#errorBlock description#>
 @param logName 日志名（logData）
 @param source 来源
 */
+ (void)writeLog:(NSString *)logName
         logType:(HCLogType )logType
        logLevel:(HCLogLevel )logLevel
          userId:(NSString *)userId
     phoneNumber:(NSString *)phoneNumber
          source:(NSString *)source
            data:(NSDictionary *)data
    successBlock:(void(^)(BOOL success))successBlock
      errorBlock:(void(^)(NSError* error))errorBlock;


/**
 日志写入(仅限崩溃日志使用)
 @param logName 日志名（logData）
 @param data <#data description#>
 @param completionBlock <#completionBlock description#>
 */
+ (void)writeLogFile:(NSString* )logName data:(NSData *)data completionBlock:(void(^)(NSError* error))completionBlock;

/**
 日志读取

 @param logName 文件名
 */
+ (NSData *)readLogFile:(NSString* )logName;

/**
 删除日志
 
 @param logName 文件名
 */
+ (BOOL)removeLogFile:(NSString* )logName;



/**
 关闭日志
 
 @param logName 文件名
 */
+ (void)closeIO:(NSString* )logName;

@end

NS_ASSUME_NONNULL_END
