//
//  BaseCustomeNavBar.m
//  ZK_OC_Tools
//
//  Created by LSH on 2019/1/24.
//  Copyright © 2019 Practice. All rights reserved.
//

#import "BaseCustomeNavBar.h"

@implementation BaseCustomeNavBar


-(instancetype)init
{
    self = [super init];
    if (self) {

    }
    return self;
}

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:CGRectMake(0, 70, kScreenWidth, kNavBarStatusBarHeight)];
    if (self) {


        [self leftBtn];
        [self rightBtn];
        [self right0Btn];
//        [self titleView];
        [self titleLab];
        [self sep];//分割线
    }
    return self;
}

-(CALayer *)sep
{
    if (!_sep) {
        _sep = [[CALayer alloc]init];
        _sep.frame = CGRectMake(0, self.frame.size.height-0.5, self.frame.size.width, 0.5);
        _sep.backgroundColor = [UIColor lightGrayColor].CGColor;
        [self.layer addSublayer:_sep];
    }
    return _sep;
}

-(UIButton *)leftBtn
{
    if (!_leftBtn) {
        _leftBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        _leftBtn.frame = CGRectMake(0, self.frame.size.height-44-1, 40, 44);
        _leftBtn.imageEdgeInsets = UIEdgeInsetsMake(0, -5, 0, 0);
        [_leftBtn setImage:kImageNamed(@"back") forState:UIControlStateNormal];
        [self addSubview:_leftBtn];
    }
    return _leftBtn;
}
-(UIButton *)rightBtn
{
    if (!_rightBtn) {
        _rightBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        _rightBtn.frame = CGRectMake(self.frame.size.width-36-3, self.frame.size.height-44-1, 36, 44);
        [_rightBtn setImage:kImageNamed(@"Square") forState:UIControlStateNormal];
        [self addSubview:_rightBtn];
    }
    return _rightBtn;
}

-(UIButton *)right0Btn
{
    if (!_right0Btn) {
        _right0Btn = [UIButton buttonWithType:UIButtonTypeCustom];
        _right0Btn.frame = CGRectMake(self.frame.size.width-36-36-3, self.frame.size.height-44-1, 36, 44);
        [_right0Btn setImage:kImageNamed(@"Square") forState:UIControlStateNormal];
        [self addSubview:_right0Btn];
    }
    return _right0Btn;
}
-(UIView *)titleView
{
    if (!_titleView) {
        _titleView = [[UIView alloc]initWithFrame:CGRectMake(0, self.frame.size.height-44-1, kScreenWidth*0.6, 44)];
        _titleView.backgroundColor = RedColor;
        _titleView.centerX = self.centerX;
        [self addSubview:_titleView];
    }
    return _titleView;
}

-(UILabel *)titleLab
{
    if (!_titleLab) {
        _titleLab = [[UILabel alloc]initWithFrame:CGRectMake(0, self.frame.size.height-44-1, kScreenWidth*0.6, 44)];
        _titleLab.backgroundColor = [UIColor cyanColor];
        _titleLab.centerX = self.centerX;
        [self addSubview:_titleLab];
    }
    return _titleLab;
}
@end
