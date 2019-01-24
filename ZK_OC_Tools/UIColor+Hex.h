//
//  UIColor+Hex.h
//  ZKFrameWork
//
//  Created by 张康 on 2018/4/2.
//  Copyright © 2018年 张康. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)


+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexString:(NSString *)color;

@end
