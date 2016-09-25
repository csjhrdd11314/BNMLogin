//
//  SAPIFaceInfo.h
//  SAPILib
//
//  Created by jiangzhenjie on 15/5/15.
//  Copyright (c) 2015年 baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SAPIFaceInfo : NSObject

/**
 *  用户uid
 */
@property (nonatomic, strong) NSString *uid;

/**
 * 人脸Id
 */
@property (nonatomic, strong) NSString *faceId;

/**
 * 是否可信
 */
@property (nonatomic, assign) BOOL faceIsTrusted;

/**
 * 人脸授权id
 */
@property (nonatomic, strong) NSString *faceAuthsid;

/**
 * token，需要认证用户时用到
 */
@property (nonatomic, strong) NSString *faceAuthToken;

/**
 *  是否为人脸用户
 */
@property (nonatomic, assign) BOOL faceUser;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (NSDictionary *)toDictionary;

@end
