//
//  AppDelegate.h
//  Share&PayDemo
//
//  Created by apple on 2017/5/23.
//  Copyright © 2017年 shang. All rights reserved.
//

#import <UIKit/UIKit.h>


//UMeng https://i.umeng.com
static NSString * const kUMAppKey = @"59126acacae7e72a4b001a1c";

//Vendor: Sina http://open.weibo.com
static NSString * const kSinaAppKey = @"427975783";
static NSString * const kSinaRedirectURL =  @"http://sns.whalecloud.com/sina2/callback";
static NSString * const kSinaAppSecret = @"975144dcda0487b4e36a48f85d98c8e0";

//Vendor:Tencnet QQ http://open.qq.com
static NSString * const kTencentQQAppID = @"1105151880"; //0x41DF4788
static NSString * const kTencentQQAppKey = @"huLVBLX3q86ZsqN5";

//Vendor:WeChat  https://open.weixin.qq.com
static NSString * const kWeChatAppID = @"wx07c95991af084504";
static NSString * const kWeChatAppSecret = @"65132bdae7df86ffe69a633a5b306584";
static NSString * const kWeChatAuthScope = @"snsapi_message,snsapi_userinfo,snsapi_friend,snsapi_contact, snsapi_base";
static NSString * const kWeChatStateCode = @"10017179517";


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end

