//
//  UIView+Common.h
//  ZKFrameWork
//
//  Created by 张康 on 2018/4/2.
//  Copyright © 2018年 张康. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Common)

- (void)setLayerShadow:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;

- (void)removeAllSubviews;
//移除除tag的子视图以外的所有子视图
- (void)removeAllSubviewsWithoutTag:(NSInteger)tag;

- (UIViewController *)viewController;

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize  size;

@end
