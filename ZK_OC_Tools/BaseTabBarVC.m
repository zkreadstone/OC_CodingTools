//
//  BaseTabBarVC.m
//  ZKFrameWork
//
//  Created by 张康 on 2018/4/8.
//  Copyright © 2018年 张康. All rights reserved.
//

#import "BaseTabBarVC.h"
#import "BaseViewController.h"
#import "ViewController.h"

#import "HomeViewController.h"
#import "MarketViewController.h"
#import "MineViewController.h"


@interface BaseTabBarVC ()

@end

@implementation BaseTabBarVC

- (void)viewDidLoad {
    [super viewDidLoad];
//    UITabBar * tabbar = self.tabBar;
//    UIView * pointView = [[UIView alloc] initWithFrame:CGRectMake(kScreenWidth - kScreenWidth / 5 + kScreenWidth / 5 * 3 / 5.0, 6, 10, 10)];
//    pointView.backgroundColor = [UIColor whiteColor];
//    pointView.layer.masksToBounds = YES;
//    pointView.layer.cornerRadius = 5;
//    pointView.tag = 333;
//    pointView.hidden = YES;
//    [tabbar addSubview:pointView];
}

- (void)initControllers
{
    NSArray *tabControllerNames = @[@"HomeViewController",
                                    @"MarketViewController",
                                    @"MineViewController"];
    NSArray *titles = @[@"首页",@"购物",@"我的"];
    NSArray *tabBarImgs = @[@"Pay",@"Square",@"Mine"];
    NSArray *tabBarImgsSelected = @[@"Pay_s",@"Square_s",@"MineS"];

    NSMutableArray *tabControllers = @[].mutableCopy;
    [tabControllerNames enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        NSString *controllerName = obj;
        Class class = NSClassFromString(controllerName);
        if (class) {
            [tabControllers addObject:[self vc:[class new] image:tabBarImgs[idx] slectedImage:tabBarImgsSelected[idx] title:titles[idx] normalColor:kColorWithHexStr(@"#505050") slectednormalColor:ThemeColor]];
        }
    }];
    self.viewControllers = tabControllers;
}
- (BOOL)tabBarController:(UITabBarController *)tabBarController shouldSelectViewController:(UIViewController *)viewController
{
//    if ([viewController isKindOfClass:[RefreshViewController class]]) {
//        RefreshViewController *contrller = (RefreshViewController *)viewController;
//        [contrller startRefresh];
//    }
    
    return YES;
}


- (BaseNavigationVC *)vc:(UIViewController *)vc image:(NSString *)image slectedImage:(NSString *)slectedImage title:(NSString *)title normalColor:(UIColor *)normalColor slectednormalColor:(UIColor *)slectednormalColor {
    BaseNavigationVC *nc = [[BaseNavigationVC alloc] initWithRootViewController:vc];
    nc.tabBarItem.image = [UIImage imageNamed:image];
    nc.tabBarItem.selectedImage = [[UIImage imageNamed:slectedImage] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    nc.tabBarItem.title = title;
    NSDictionary *mormalDict = [NSDictionary dictionaryWithObject:normalColor forKey:NSForegroundColorAttributeName];
    [nc.tabBarItem setTitleTextAttributes:mormalDict forState:UIControlStateNormal];
    NSDictionary *slectedDict = [NSDictionary dictionaryWithObject:slectednormalColor forKey:NSForegroundColorAttributeName];
    [nc.tabBarItem setTitleTextAttributes:slectedDict forState:UIControlStateSelected];
    
    return nc;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

@end
