//
//  Wechat.h
//  VendorsKit
//
//  Created by 翟泉 on 2016/10/9.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserEntity.h"

@interface Wechat : NSObject

/// 注册APPKEY  支付回调地址
+ (void)registerAppId:(NSString * _Nonnull)appid notifyUrl:(NSString * _Nonnull)notifyUrl;

/// 微信登录  登录成功后回调返回用户数据
+ (void)loginWithCompleted:(void (^ _Nonnull)(UserEntity * _Nonnull user))completed;
    

+ (NSString * _Nonnull)notifyUrl;

@end
