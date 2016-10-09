//
//  UserEntity.h
//  VendorsKit
//
//  Created by 翟泉 on 2016/10/9.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 第三方登录，用户信息
@interface UserEntity : NSObject
    
@property (strong, nonatomic) NSString *nickname;
    
@property (strong, nonatomic) NSString *sex;
    
@property (strong, nonatomic) NSString *accesstoken;
    
@property (strong, nonatomic) NSString *openId;
    
@property (strong, nonatomic) NSString *headImg;

@end
