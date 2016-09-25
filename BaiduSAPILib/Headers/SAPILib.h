//
//  SAPILib.h
//  SAPILib
//
//  Created by Vinson.D.Warm on 13-9-6.
//  Copyright (c) 2013年 baidu. All rights reserved.
//
//  v6.14.5 2015.12.22
//  支持QQ SSO登录
//
//  v6.14.4 2015.12.02
//  wappass.baidu.com域支持HTTPS
//
//  v6.14.2 2015.11.23
//  短信登录接口支持图片验证码
//  增加飞凡第三方登录
//
//  v6.14.1 2015.11.03
//  修复Archive时不支持Bitcode错误
//  增加包含额外信息的登录成功回调
//
//  v6.14.0 2015.10.23
//  增加应用内Native和H5的登录状态同步
//  部分接口支持HTTPS通信（参考SAPIMainManager的shouldEnableHTTPSIfPossible属性）
//  支持语音验证码（参考SAPIMainManager的supportVoiceVerifyOnSMSLogin属性）
//  支持海外手机号登录注册（参考SAPIMainManager的supportForeignMobile属性）
//  支持Bitcode
//
//  v6.12.2 2015.9.18
//  支持OnePassword
//  人人网用户登录增加引导绑定流程，后续将下线人人网登录
//  增加登录成功前回调
//  增加修改密码完成后更新登录态
//  增加第三方登录绑定方式
//
//  v6.12.1 2015.7.30
//  优化代码，修复SAPIMainWebViewDelegate与optional关键字不一致的问题。
//
//  v6.12.0 2015.7.24
//  新增声纹开关，验证接口
//  新增人脸登录（人脸登录的授权和bundle id有关，如需体验，可用手机访问https://passport.rdtest.baidu.com/export/app/download/Passport_iOS.html）
//  注册接口增加统计项
//  优化代码
//
//  v6.11.4 2015.7.20
//  修复绑定操作页面webview自带的导航栏消失的问题
//
//  v6.11.3 2015.7.15
//  修复QQ用户昵称包含特殊字符时无法登录的问题
//
//  v6.11.2 2015.06.01
//  取消导入登录态时ptoken不能为nil的限制；新增一个获取登录界面URL的方法；优化代码
//
//  v6.11.1 2015.05.18
//  支持线下环境SDK版本号检测；修复声纹登录帐号无法互通的问题
//
//  v6.11.0 2015.05.12
//  声纹登录带*方案
//
//  v6.8.5  2015.05.05
//  SAPIMainManagerDelegate新增成功登录前的回调
//
//  v6.8.4  2015.04.30
//  短信登录增加第三方登录入口；优化手机绑定逻辑
//
//  v6.8.3  2015.04.27
//  优化bduss、cookie的处理策略
//
//  v6.8.2  2015.04.21
//  新增错误码定义；优化帐号正常化逻辑

#ifndef SAPILib_SAPILib_h
#define SAPILib_SAPILib_h

// 工具 & 框架
#import "SAPIJSONUtility.h"
#import "SAPIInvokeCommand.h"
#import "SAPIPlugin.h"
#import "SAPIWebView.h"
#import "SAPIMainWebView.h"
#import "SapiUIDManager.h"

// SAPI基本类型定义
#import "SAPIDefine.h"

// SAPI通用模型
#import "SAPILoginModel.h"

// SAPI管理组件
#import "SapiError.h"
#import "SAPILoginService.h"
#import "SAPIRegisterService.h"
#import "SAPIMainManager.h"

#endif
