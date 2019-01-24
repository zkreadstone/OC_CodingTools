//
//  ColorMacro.h
//  ZKFrameWork
//
//  Created by 张康 on 2018/4/2.
//  Copyright © 2018年 张康. All rights reserved.
//

#ifndef ColorMacro_h
#define ColorMacro_h

//随机色
#define RandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]

#define ThemeColor [UIColor colorWithHexString:@"#00C87F"]//App主色 主要用于顶部 以及特殊文字和折线

#define TagColor  [UIColor colorWithHexString:@"#EF930D"]//标签
#define BreakLineColor [UIColor colorWithHexString:@"#56B2BA"]//折线
#define BGColor [UIColor colorWithHexString:@"#F4F4F4"]//App背景色
#define SepColor [UIColor colorWithHexString:@"#E0E0E0"]//分割线
#define SepColor2 [UIColor colorWithHexString:@"#979797"]//分割线

#define PointColor [UIColor colorWithHexString:@"#54C2DC"]
//文本色
#define TextColor33 [UIColor colorWithHexString:@"#333333"]//主要文字颜色
#define TextColor99 [UIColor colorWithHexString:@"#999999"]//次级文字
#define TextColor5f [UIColor colorWithHexString:@"#5f5f5f"]//再次级文字
#define TextColor4b [UIColor colorWithHexString:@"#4B4B4B"]

//蓝色
#define TextColorBlue [UIColor colorWithHexString:@"#2E93FE"]

//基本颜色

#define ClearColor [UIColor clearColor]

#define WhiteColor [UIColor whiteColor]

#define BlackColor [UIColor blackColor]

#define GrayColor [UIColor grayColor]

#define GrayLightColor [UIColor lightGrayColor]

#define BlueColor [UIColor blueColor]

#define GreenColor [UIColor colorWithHexString:@"#23C94C"]

#define RedColor [UIColor redColor]

///颜色 a代表透明度
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

// rgb颜色转换（16进制->10进制）
#define ColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define kColorWithHexStr(color) [UIColor colorWithHexString:color]

//16进制颜色
#define kColorWithHex(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]

#endif /* ColorMacro_h */
