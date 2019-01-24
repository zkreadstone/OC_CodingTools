//
//  BaseCustomeNavBar.h
//  ZK_OC_Tools
//
//  Created by LSH on 2019/1/24.
//  Copyright © 2019 Practice. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseCustomeNavBar : UIView
/*
 *  自定义导航栏   <          标题        ☆ ☆
 */

@property (nonatomic,strong) UIButton *leftBtn;//左按钮

@property (nonatomic,strong) UIButton *rightBtn;//右按钮
@property (nonatomic,strong) UIButton *right0Btn;//右0按钮

@property (nonatomic,strong) UIView *titleView;//自定义titleView

@property (nonatomic,strong) UILabel *titleLab;//导航栏标题

@property (nonatomic,strong) CALayer *sep;//分割线


@end

NS_ASSUME_NONNULL_END
