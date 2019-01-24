//
//  BaseViewController.m
//  ZK_OC_Tools
//
//  Created by LSH on 2019/1/24.
//  Copyright © 2019 Practice. All rights reserved.
//

#import "BaseViewController.h"

@interface BaseViewController ()

@end

@implementation BaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];



}

//设置导航栏标题文字
- (void)setNavBarTitle:(NSString *)title
{
    self.navigationItem.title = title;
}
//设置特殊样式的导航栏标题文字
- (void)setNavBarTitle:(NSString *)title font:(UIFont *)font textColor:(UIColor *)color
{
    self.navigationController.navigationBar.titleTextAttributes =
    @{
      NSForegroundColorAttributeName:color,
      NSFontAttributeName:font
      };
    self.navigationItem.title = title;
}





@end
