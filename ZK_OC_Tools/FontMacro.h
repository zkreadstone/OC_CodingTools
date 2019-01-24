//
//  FontMacro.h
//  ZKFrameWork
//
//  Created by 张康 on 2018/4/2.
//  Copyright © 2018年 张康. All rights reserved.
//

#ifndef FontMacro_h
#define FontMacro_h

#define kPFFont(s) [UIFont fontWithName:@"PingFangSC-Regular" size:s]
//#define kBoldFont(s) [UIFont boldSystemFontOfSize:s]
#define kBoldFont(s) [UIFont fontWithName:@"PingFangSC-Semibold" size:s]

#define systemFontName @"PingFang-SC-Regular"


#define kFont(s) [UIFont systemFontOfSize:s]

//主标题
#define kFont20 kPFFont(20)
#define kBoldFont20 kBoldFont(20)
#define kFont17 kPFFont(17)

#define kFont16 kPFFont(16)
#define kFont15 kPFFont(15)
#define kFont14 kPFFont(14)
#define kFont13 kPFFont(13)
#define kFont12 kPFFont(12)
#define kFont11 kPFFont(11)

#define kFont10 kPFFont(10)

#endif /* FontMacro_h */
