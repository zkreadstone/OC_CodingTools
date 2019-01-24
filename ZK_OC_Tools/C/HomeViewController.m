//
//  HomeViewController.m
//  ZK_OC_Tools
//
//  Created by LSH on 2019/1/24.
//  Copyright © 2019 Practice. All rights reserved.
//

#import "HomeViewController.h"
#import "BaseCustomeNavBar.h"


@interface HomeViewController ()

@end

@implementation HomeViewController

-(void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [self setNavBarLeftItemWithImage:@"back" target:self action:@selector(btnClicked)];
}

- (void)btnClicked
{

}
- (void)viewDidLoad {
    [super viewDidLoad];

//    BaseCustomeNavBar *navBar = [[BaseCustomeNavBar alloc]initWithFrame:CGRectZero];
//    [self.view addSubview:navBar];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
