//
//  Wechat.m
//  VendorsKit
//
//  Created by 翟泉 on 2016/10/9.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import "Wechat.h"
#import "WXApi.h"

@interface Wechat ()

@property (copy, nonatomic) NSString *appid;
    
@property (copy, nonatomic) NSString *notifyUrl;
    
@end

@implementation Wechat

    
+ (nonnull Wechat *)sharedInstance; {
    static Wechat * sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}
    
- (instancetype)init {
    if (self = [super init]) {
        
    }
    return self;
}

+ (void)registerAppId:(NSString *)appid notifyUrl:(NSString *)notifyUrl {
    [Wechat sharedInstance].notifyUrl = notifyUrl;
    [Wechat sharedInstance].appid = appid;
    [WXApi registerApp:appid];
}

+ (NSString *)notifyUrl {
    return [Wechat sharedInstance].notifyUrl;
}
    
+ (void)loginWithCompleted:(void (^)(UserEntity * _Nonnull))completed {
    
}


@end
