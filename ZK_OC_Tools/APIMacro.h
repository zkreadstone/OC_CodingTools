//
//  APIMacro.h
//  MyCrudeOil
//
//  Created by 张康 on 2018/5/4.
//  Copyright © 2018年 ZhongHuaCrudeOil. All rights reserved.
//

#ifndef APIMacro_h
#define APIMacro_h

#import <UIKit/UIKit.h>

//上线时改为2   //0 测试  // 1是UAT
#define kBaseUrlStatusDistribution 2
#if (kBaseUrlStatusDistribution == 2)//上线环境

static NSString * BaseURL = @"http://47.97.108.25:8888/";

#elif (kBaseUrlStatusDistribution == 1)//UAT


static NSString * BaseURL = @"http://47.97.108.25:8888/";

#else//测试

static NSString * BaseURL = @"http://47.96.15.232:8888/";

#endif



static NSString *WebHeader = @"http://47.96.15.232/statics/articleDetailH5/";
//注册
static NSString *Register =  @"api/userCenter/appRegister";
//手机号登陆
static NSString *Login = @"api/userCenter/phoneLogin";
//微信登录
static NSString *WXLogin = @"api/app/userCenter/wechatLogin";
//绑定手机
static NSString *BengPhone = @"api/app/userCenter/bindPhone";
//重置密码
static NSString *ResetPwd = @"api/app/userCenter/resetPasswd";
//发送验证码
static NSString *SendCode = @"api/userCenter/sendVerifyCode";

//广场

/*广场专栏列表 pageSize   currentPage
* type  4专题最新／5专题最热列表页 / 6广场文章列表
* specialTopicId 专栏ID
* isFree 0只查询免费文章 1 收费文章 2 查询所有文章（免费、收费）
 */
static NSString *ArticlesList = @"api/zhuanLan/reMen";

/*广场专栏列表 pageSize   currentPage
* type 时间倒序
 */
static NSString *ColumnList = @"api/zhuanTi/tuiJianZhuanTi";
//首页Banner轮播
static NSString *Banner = @"api/homepage/getBannerList";
//文章详情
static NSString *ArticleInfo = @"api/zhuanLan/articleInfo";
//文章评论
static NSString *CommentList = @"api/app/showAppPingLun";
//发表评论
static NSString *PublicComment = @"api/baseOperte/addPingLun";
//点赞
static NSString *ZanUrl = @"api/baseOperte/dianZanCaiCai";
//文章收藏
static NSString *CollectArticle = @"api/baseOperte/addCollect";
//关注作者或者专题
static NSString *AttentionA = @"api/baseOperte/guanZhu";
//打赏文章 articleId   rewardNum
static NSString *RewardArticle = @"api/app/articleReward";
//文章付费 articleId  payNum
static NSString *PayArticle = @"api/app/articlePay";
//作者
static NSString *AuthorInfo = @"api/baseOperte/zuoJia";
//当前登录人的关注列表
static NSString *AttentionList = @"api/baseOperte/getAllConcerns";
//作者文章
static NSString *AuthorArticles = @"api/zhuanLan/zuoJiaWenZhang";


/*********BDT*************/
//BDT 商城列表
static NSString *BDTList = @"api/app/bidustore/list";
//购买BDT
static NSString *BuyBDT = @"api/app/bidustore/buy";

/**********付费************/
//鸡汤文案
static NSString *Jitang = @"api/homepage/wenan";
//收费文章列表
static NSString *NoFreeArticles = @"api/app/shoufei/articleList";

/***********我的************/
//个人信息
static NSString *userInfo = @"api/userCenter/getInfo";
//跟新用户信息
static NSString *UploadUserInfo = @"api/userCenter/updateUse";
//图片上传 file importType id
static NSString *UploadImage = @"api/picture/upload";
//更新用户LOGO
static NSString *UploadUserHeader = @"api/userCenter/updateHeadImg";
//我收藏的文章
static NSString *MyCollectArticle = @"api/app/shouCangList";
//我的订阅专栏
static NSString *MyColumn = @"api/app/zhuanLanList";
//我关注的作者
static NSString *MyAttentionAuthor= @"api/app/guanZhuList";
//我的粉丝
static NSString *MyFans = @"api/app/fansList";
//我的资产
static NSString *MyBdt = @"api/app/myBdt";
//我的文章
static NSString *MyArticles = @"api/zhuanLan/zuoJiaWenZhang";
//我的专栏列表
static NSString *MyColumnList = @"api/zhuanTi/getZhuanTiList";
//设置文章阅读价格
static NSString *SetArticlePrice = @"api/app/wenZhangPrice";
//文章专栏置顶功能
static NSString *Top = @"api/app/zhiDing";
//我的券包
static NSString *MyQuanBao = @"api/app/bidustore/myproductlist";
//我的消息
static NSString *MyMsg = @"api/message/showMessage";
//未读消息
static NSString *UnreadMsg = @"api/message/getUnreadMessageCount";
//消息已读
static NSString *MsgReaded = @"api/message/updateMessageStatus";


//搜索
static NSString *Search = @"api/search/searchAll";
#endif /* APIMacro_h */
