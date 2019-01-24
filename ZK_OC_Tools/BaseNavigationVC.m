//
//  BaseNavigationVC.m
//  NavBar
//
//  Created by LSH on 2019/1/24.
//  Copyright © 2019 None. All rights reserved.
//

#import "BaseNavigationVC.h"

@interface BaseNavigationVC ()<UIGestureRecognizerDelegate,UINavigationControllerDelegate>

@end

@implementation BaseNavigationVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.delegate = self;
    self.interactivePopGestureRecognizer.delegate = self;
}
-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated
{
    if (self.childViewControllers.count > 0) { // 如果push进来的不是第一个控制器
        UIImage *rightImage = [[UIImage imageNamed:self.backImgName.length ?  self.backImgName:@"back"] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
        [viewController.navigationItem setHidesBackButton:YES];
        viewController.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithImage:rightImage style:UIBarButtonItemStylePlain target:self action:@selector(backClicked)];
        viewController.hidesBottomBarWhenPushed = YES;
    }
    // 这句super的push要放在后面, 让viewController可以覆盖上面设置的leftBarButtonItem
    if (![[super topViewController] isKindOfClass:[viewController class]])//如果和上一个控制器一样，隔绝此操作
    {
        [super pushViewController:viewController animated:animated];
    }
}

- (void)backClicked
{
    [self popViewControllerAnimated:YES];
}

#pragma mark - <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer
{
    return self.childViewControllers.count > 1;
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldBeRequiredToFailByGestureRecognizer:(nonnull UIGestureRecognizer *)otherGestureRecognizer
{
    return YES;
}

@end
