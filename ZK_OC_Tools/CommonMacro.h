//
//  CommonMacro.h
//  ZKFrameWork
//
//  Created by 张康 on 2018/4/2.
//  Copyright © 2018年 张康. All rights reserved.
//

#ifndef CommonMacro_h
#define CommonMacro_h

#define HasLogin @"hasLogin"

#define NSLocalizedStringTableName @"Localizable"
#define UserLanguage @"userLanguage"
#define UserInfoS @"userInfoS"
#define FirstShow @"FirstShow"
#define NetStatus @"NetWorkStatus"

#define HUDShowTime 1.5

//通知宏
#define WXLOGINotification @"WXLOGINotification"
#define SearchHistory @"searchHistory"
#define SearchIMOHistory @"searchIMOHistory"

#define BtnCornerRadious 4.0f
#define ViewCornerRadious 6.0f
#define SegmentViewHeight 44.0f

//网络请求单例
#define kNetworkUtil        [NetWorkUtil sharedInstance]
#define kPage               @"page"
#define kPageNum            @"pageNum"

//权限管理工具
#define kJurisdictionUtil   [JurisdictionUtil shareInstance]

//获取系统对象
#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kAppDelegate        ((AppDelegate *)[UIApplication sharedApplication].delegate)
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

//第三方相关key
#define UMAppKey    @"5b066760b27b0a6b57000064"
#define UMChannel   @""

#define WXAppKey    @"wx7274679e820dd668"
#define WXAppSecret @"18120ab871a5fb471ba790262ebc8eb9"


#define QQAppKey    @"BOpV0vGNo2iphJZ5"
#define QQid        @"1106875253"

#define JPushAppKey @"1057f4831bed92341cffab6b"




// 检查系统版本
#define iOS_SYSTEM_VERSION(VERSION) ([[UIDevice currentDevice].systemVersion doubleValue] >= VERSION)

//判断等于某个版本
#define SYSTEM_VERSION_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
//判断大于某个版本
#define SYSTEM_VERSION_GREATER_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
//判断大于等于某个版本
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
//判断小于某个系统版本
#define SYSTEM_VERSION_LESS_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
//判断小于等于某个系统版本
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

//系统屏幕的尺寸
#define kStatusBarHeight [[UIApplication sharedApplication] statusBarFrame].size.height
#define kNavBarHeight 44.0
#define kTabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)

#define kTabBarDifference ([[UIApplication sharedApplication] statusBarFrame].size.height>20?34:0) //计算tab的高度差值
#define kNavBarStatusBarHeight (kStatusBarHeight + kNavBarHeight)
/** 顶部适配iPhoneX */
#define kTop (KIsiPhoneX ? 64.0 + 24.0 : 64.0)
//获取屏幕宽高
#define kScreenWidth [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight [[UIScreen mainScreen] bounds].size.height
#define kScreen_Bounds [UIScreen mainScreen].bounds
#define kBoundsWithOutNavStaBar  CGRectMake(0, 0, kScreenWidth, kScreenHeight-kNavBarStatusBarHeight)
//判断是否是iPhoneX
#define KIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)


//登录判断和跳转 需要登录
#define NeedLogin(vc) \
if (kAppDelegate.hasLogin == NO) {\
    [[ZHArchiverTool sharedTool]loginAgainWithVC:vc];\
    return ;\
}\
//权限弹窗  --注意传入的BOOL值取反 见代码
#define PowerShow(power) \
if (!power) {\
    kShowWithString(@"认证成企业才能进行此操作");\
    return;\
}\
//强弱引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

#define Version11AdjustTableView if (@available(iOS 11.0, *)) {\
    self.tableView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;\
} else {\
    self.automaticallyAdjustsScrollViewInsets = NO;\
}\
//self.tableView.contentInset = UIEdgeInsetsMake(kNavBarStatusBarHeight, 0, kTabBarHeight, 0);\
//self.tableView.scrollIndicatorInsets = _tableView.contentInset;\

//View 圆角和加边框
#define ViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

// View 圆角
#define ViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

#define kScaleWidth kScreenWidth/375.0
#define kScaleHeight kScreenHeight/667.0
//根据ip6的屏幕来拉伸
#define kRealValue(width) ((width)*(KScreenWidth/375.0f))

//定义UIImage对象
#define ImageWithFile(_pointer) [UIImage imageWithContentsOfFile:([[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"%@@%dx", _pointer, (int)[UIScreen mainScreen].nativeScale] ofType:@"png"])]
#define kImageNamed(name) [UIImage imageNamed:name]

//判断非空
#define ValidStr(f) (f!=nil && ![f isKindOfClass:[NSNull class]] && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define ValidDict(f) (f!=nil && [f isKindOfClass:[NSDictionary class]])
#define ValidArray(f) (f!=nil && [f isKindOfClass:[NSArray class]] && [f count]>0)
#define ValidNum(f) (f!=nil && [f isKindOfClass:[NSNumber class]])
#define ValidClass(f,cls) (f!=nil && [f isKindOfClass:[cls class]])
#define ValidData(f) (f!=nil && [f isKindOfClass:[NSData class]])
#define kNoneNilStr(str) str.length ? str : @" "

#define SafeStr(f) (ValidStr(f) ? f:@"")
#define SafeStr2(f) (ValidStr(f) ? f:@"暂未填写")
// 判断是否为空
#define isNull(obj) (obj == nil || [obj isEqualToString:@""] || [obj isEqual:[NSNull null]])
//数组是否为空
#define kArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || array.count == 0)
//字典是否为空
#define kDictIsEmpty(dic) (dic == nil || [dic isKindOfClass:[NSNull class]] || dic.allKeys == 0)

#define NSStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]

#define IntToString(num) ([NSString stringWithFormat:@"%d",num])
#define FloatToString(float) ([NSString stringWithFormat:@"%.2f",float])
#define IntegerToString(num) ([NSString stringWithFormat:@"%ld",num])

//拼接字符串
#define Append2Str(str1,str2) ([NSString stringWithFormat:@"%@%@",str1,str2])
#define Append3Str(str1,str2,str3) ([NSString stringWithFormat:@"%@%@%@",str1,str2,str3])
#define Append4Str(str1,str2,str3,str4) ([NSString stringWithFormat:@"%@%@%@%@",str1,str2,str3,str4])
#define Append5Str(str1,str2,str3,str4,str5) ([NSString stringWithFormat:@"%@%@%@%@%@",str1,str2,str3,str4,str5])
// 提示文字
#define kShowWithString(str) [HUDUtil showStr:str];

//自适应宽度
#define BoundingWidth(str,with,font) [str boundingRectWithSize:CGSizeMake(with, 21) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:[UIFont systemFontOfSize:font]} context:nil]


//自适应高度
#define BoundingHeight(str,with,font) [str boundingRectWithSize:CGSizeMake(with, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:[UIFont systemFontOfSize:font]} context:nil]

#define BoundingHeightboldSystemFont(str,with,font) [str boundingRectWithSize:CGSizeMake(with, MAXFLOAT) options:NSStringDrawingUsesLineFragmentOrigin attributes:@{NSFontAttributeName:[UIFont boldSystemFontOfSize:font]} context:nil]


/**************   自定义高效率的 NSLog     ****************************/
#if DEBUG

#define DLog(...) NSLog(@"%s 第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else

#define DLog(FORMAT, ...) nil
#endif

#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr, "%s:%d\t%s\n", [[[NSString stringWithUTF8String: __FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif
/**
 资讯搜索历史路径
  */
#define NewsHistorySearchPath [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"NewsHistorySearchPath.plist"]

/**
 圈子搜索历史路径
 */
#define CricleHistorySearchPath [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"CricleHistorySearchPath.plist"]

#endif /* CommonMacro_h */
