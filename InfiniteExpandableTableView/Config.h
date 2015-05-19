//
//  Config.h
//  JiaoLianB
//
//  Created by naodongjiaolian on 14/11/26.
//  Copyright (c) 2014年 naodongjiaolian. All rights reserved.
//
// ！！本文件是编译时(BuildTime)的配置文件


#ifndef JiaoLianB_Config_h
#define JiaoLianB_Config_h



//Color
#define V2ThemeColor [UIColor colorWithRed:255/255.0 green:105/255.0 blue:109/255.0 alpha:1] //粉色，段选择器、indicator、border、按钮背景等

//分割条
#define kSeparatorColor [UIColor colorWithRed:0xe6/255.0 green:0xe6/255.0 blue:0xe6/255.0 alpha:1]
#define kSeparatorColorSystem [UIColor colorWithRed:0xc8/255.0 green:0xc7/255.0 blue:0xcc/255.0 alpha:1]

//导航条
#define NavigationBarTintColor [UIColor colorWithRed:230/255.0 green:230/255.0 blue:230/255.0 alpha:1]
#define NavigationBarTitleTintColor [UIColor blackColor]
#define NavigationBarButtonTintColor [UIColor blackColor]

//普通View中用到的颜色
#define TextViewBorderColor [UIColor colorWithRed:210/255.0 green:210/255.0 blue:210/255.0 alpha:1]
#define ViewBackGroundColor [UIColor colorWithRed:248/255.0 green:248/255.0 blue:248/255.0 alpha:1]//大部分view（tableview、uiview）的背景色
#define ViewBackGroundColor_dark [UIColor colorWithRed:0xe5/255.0 green:0xe5/255.0 blue:0xe5/255.0 alpha:1]//使用在输入姓名处
//发短信中用到的颜色
#define CourseBigNumberAlreadySignUpColor [UIColor colorWithRed:251/255.0 green:87/255.0 blue:14/255.0 alpha:1]
//钱包中用到的颜色
#define OrderMoneyColor V2ThemeColor
//时间管理中用到的颜色
#define TimeAvailableColor [UIColor colorWithRed:149/255.0 green:149/255.0 blue:149/255.0 alpha:1]
#define TimeAvailableBackColor [UIColor whiteColor]
#define TimeNotAvailableColor [UIColor colorWithRed:167/255.0 green:167/255.0 blue:167/255.0 alpha:1]
#define TimeNotAvailableBackColor [UIColor colorWithRed:238/255.0 green:238/255.0 blue:238/255.0 alpha:1]
#define TimeSelectedColor [UIColor whiteColor]
#define TimeSelectedBackColor [UIColor colorWithRed:0/255.0 green:185/255.0 blue:3/255.0 alpha:1]
//按钮颜色
#define RegButTitleColor [UIColor grayColor] //注册账号、忘记密码 文字颜色！
#define ButBackColor_Normal V2ThemeColor
#define ButTitleColor_Normal [UIColor whiteColor]
//#define ButBackColor_Disabled [UIColor colorWithRed:1 green:114/255. blue:128/255. alpha:1]
//#define ButBackColor_Border [UIColor colorWithRed:236/255. green:71/255. blue:77/255. alpha:1]

//Font size
#define NavigationTitleFontSize [UIFont systemFontOfSize:18]

//AFNetworking中的UA
#define JiaoLianClienUserAgent @"JiaoLianBClient iOS"
//API网址
#define API_TrainerSMSCheck @"trainer/trainer/check" //发验证码
#define API_TrainerRegister @"trainer/trainer/register" //教练注册
#define API_TrainerLogin    @"trainer/trainer/login" //教练登录
#define API_TrainerAddCourse @"trainer/courses/add"  //教练添加课程
#define API_TrainerResetPass @"trainer/trainer/resetPassword" //修改密码、忘记密码
#define API_TrainerResetPassV2 @"trainer/trainer/resetPwd" //修改密码.第二版20150126，只需要原始密码和新密码，

#define API_TrainerInfo @"trainer/trainer/info" //获取教练个人中心页的所有信息
#define API_checkCode   @"trainer/trainer/checkCode" //判断验证码是否正确

#define API_TrainerAvailableCourseTypeList @"trainer/category/getlist"
#define API_TrainerUploadAvatar @"trainer/trainer/upload"  //教练上传头像
#define API_TrainerAllCourse @"trainer/courses/getTrainerAllCourse" //获取所有课程
#define API_NumberRecordsPerRequest @"99" //每页的记录数
#define API_TrainerIndexCourse @"trainer/courses/indexTrainerCourse" //首页我的课程
#define API_TrainerHistoryCourse @"trainer/courses/history" //查看历史课程
#define API_TrainerPersonalCenter @"trainer/trainer/personalCenter" //用户中心页面
#define API_TrainerSendMessage @"trainer/trainer/sendMessage" //给学员发送消息（SMS或者其他消息？）
#define API_TrainerHotCourse @"user/courses/getHotCourseList" //热门课程
#define API_TrainerAddPics @"trainer/trainer/addTrainerAlbum"  //教练上传照片
#define API_Auth      @"trainer/trainer/auth" //认证
#define API_TrainerTimeManageGetTrainerTimeList @"trainer/trainer/getTrainerTimeList" //获取时间管理列表
#define API_TrainerTimeManageSave @"trainer/trainer/time_manage" //保存时间管理列表

#define API_AreaForm @"trainer/trainer/getArea"   //地区名单
#define API_coachInfo @"trainer/trainer/info"   //教练的信息 //@[@"id",@"name",@"x",@"y",@"src",@"sex",@"age",@"email",@"qq",@"mobile",@"rank",@"advert",@"content",@"edu_his",@"book_his",@"work_time",@"award_his",@"tag",@"cat_id",@"order_id",@"is_identity",@"is_staff",@"status",@"assess_number",@"address",@"teach_area",@"money",@"comment_count",@"imgs",@"sports_type"]

#define API_sportsType @"trainer/category/getlist"//运动类型
#define API_editCoachInfo @"trainer/trainer/modify" //修改个人信息
#define API_TrainerOrderList @"trainer/form/trainerOrderList" //订单列表
#define API_TrainerOrderDetail @"trainer/form/getOrderDetails" //订单详情
#define API_TrainerCommentDict @"trainer/Assess/getTrainerCourseAccess" //评价
#define API_V2MyCourse @"trainer/NewCourses/getTrainerCourses" //V2我的课程
#define API_FansArray @"trainer/fans/getFansByTrainer" //粉丝
#define API_applyCourse @"trainer/NewCourses/applyCourses" //申请发课
#define API_applyCoursePhoto @"/trainer/NewCourses/applyCoursePhotos" //上传申请发课的图片
#define API_GetVersion @"user/version/getVersion"//检测是否有新版本。type=3
#define API_deltePic @"trainer/trainer/delOneTrainerAlbum"//删除照片
//H5页面网址
#define  H5_hotCourse @"wap/courseList.html"
#define  H5_RequestPublishCourse @"wap/want.html?ex_id="
#define  H5_CourseDetail @"wap/course.html?course_id="
//图片质量
#define JPGQuality 0.8

//Debug用的宏
//BLog
#define BLog(fmt, ...) NSLog((@"%s [Line %d]" fmt), __PRETTY_FUNCTION__,  __LINE__,##__VA_ARGS__);

//添加border
#define  kAddBorder(x) x.layer.borderWidth=1;
//#define BLog(x,...) ;;;
#define PO(x) NSLog(@"%s = %@", #x, x);
//ensureNotnil
#define ObjectOrEmptyString(x) x?x:@""
//random
#define random(min,max) ((arc4random() % (max-min+1)) + min)

//常用宏、path、file
#define PATH_DOCUMENTDIR NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0]
#define PATH_CACHESDIR NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)[0]
#define PATH_TEMPDIRWITHSLASH NSTemporaryDirectory() //这个最后面有斜线
#define PATH_HOMEDIR NSHomeDirectory()
#define PATH_PREFERENCEDIR NSSearchPathForDirectoriesInDomains(NSPreferencePanesDirectory, NSUserDomainMask, YES)[0]
#define PATH_NSBundle [[NSBundle bundleForClass:[self class]] resourcePath] //[NSBundle mainBundle].bundlePath 
#define FILE_CACHEFILENAME [NSString stringWithFormat:@"%s.plist",__PRETTY_FUNCTION__] //缓存文件名
#define FILE_CACHEFILE_FULL_PATH [PATH_CACHESDIR stringByAppendingPathComponent:FILE_CACHEFILENAME] //缓存文件的文件路径

#define deepCopyMacro(obj) [NSKeyedUnarchiver unarchiveObjectWithData:[NSKeyedArchiver archivedDataWithRootObject:obj]]
#define APPShortVersionFloat [[[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"] floatValue] //必须是x.yy不能有更多的点。

//单个像素高度.0.32可以保证真是一个像素！0.5在ip6+上是两个像素，经测试此值在ip4、ip6、ip6+上都是一个像素。
#define k1PxHeight 0.32




//发送消息每个课程的限制
#define MAX_SMS_NUMBER 2

//ios8中seperator需要去除layoutMargin
#define IOS8tableViewWillDisplay  \
-(void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath{ \
    if ([cell respondsToSelector:@selector(setSeparatorInset:)]) { \
        [cell setSeparatorInset:UIEdgeInsetsZero]; \
    } \
    if ([cell respondsToSelector:@selector(setPreservesSuperviewLayoutMargins:)]) { \
        [cell setPreservesSuperviewLayoutMargins:NO]; \
    } \
    if ([cell respondsToSelector:@selector(setLayoutMargins:)]) { \
        [cell setLayoutMargins:UIEdgeInsetsZero]; \
    } \
} \

//高德地图宏
#define AMAPKEY_com_naodong_jiaolianB @"8201b989a3be279f3b4abd984bccdd9b"
#define AMAPKEY_com_naodong_jiaolian_jiaolianB @"9c2b4545a23422cce05f0309853710a2"
#define AMAPKEY_star @"b09518f95cc7b9bb8924cd5d91c214dc"
//UMengAnalyze
#define UMENGAppKey   [[[NSBundle mainBundle] bundleIdentifier] isEqualToString:@"com.naodong.jiaolian.jiaolianB"]?@"552b85f7fd98c540b2001b6b":@"54ee9106fd98c5066500078e"
#define UMENGEventID_Request @"request"
#define UMENGEventID_
//UmengPush
#define UMENGMasterSecKey @"7f5imvn2fap0ukjcfzn8ttwbddhddd2w"
#define kMethodName [NSString stringWithFormat:@"%s",__PRETTY_FUNCTION__]
#define kUMengEventAttribute @{@"method":kMethodName,\
    @"uid":[[ClientConfigObject sharedClientConfig] getIDNameCode][@"id"]?:@"-1",\
    @"realname":[ClientConfigObject sharedClientConfig].trainerInfo.name?:@"-1",\
    @"mobile":[ClientConfigObject sharedClientConfig].getMobile?:@"-1",}

//shareSDK
#define ShareSDKAppKey @"56efbb86107c"
#define ShareSDKAppSecret @"26da4ce6d925b261657327c81252e467"
//微信宏
#define WeChatAppID @"wx425c590e12c47187"
#define WeChatAppSecret @"02e49d137ab1b57529e6a5ca5a98f5a2"
//微博宏
#define WeiboAppID @"1137411566"
#define WeiboAppSecret @"0b25cba645e59b36200f7c4249dc88b9"


//addCourse
#define ADDCOURSE_TYPE_1V1 @"1"
#define ADDCOURSE_TYPE_1VN @"2"
#define ADDCOURSE_TYPE_1V1_STRING @"1对1"
#define ADDCOURSE_TYPE_1VN_STRING @"1对多"

//Form界面
#define FXCellTextLabelFont [UIFont systemFontOfSize:15]
#define FXCellDetailTextLabelFont [UIFont systemFontOfSize:13]
#define FormEnabledColor [UIColor blackColor]
#define FormDisabledColor [UIColor grayColor]
#define FormTextColor [UIColor colorWithRed:0.56 green:0.56 blue:0.58 alpha:1]

//coding学来的
#define kKeyWindow [UIApplication sharedApplication].keyWindow
#define kScreen_Bounds [UIScreen mainScreen].bounds
#define kScreen_Height [UIScreen mainScreen].bounds.size.height
#define kScreen_Width [UIScreen mainScreen].bounds.size.width
#define kTipAlert(_S_, ...)     [[[UIAlertView alloc] initWithTitle:@"提示" message:[NSString stringWithFormat:(_S_), ##__VA_ARGS__] delegate:nil cancelButtonTitle:@"知道了" otherButtonTitles:nil] show]
#define kTipToast(_S_) [kKeyWindow makeToast:(_S_) duration:3.0 position:CSToastPositionCenter];

//简写
#define kAppDelegate (AppDelegate*)[UIApplication sharedApplication].delegate
//NSError
#define kErrorDomain @"com.naodong"

//XTSegmentControl
#define kXTSegFrame CGRectMake(0, 0, kScreen_Width, 40)
#define kiCarouselEdgeInsets UIEdgeInsetsMake(40+4, 0, 0, 0) //4是separator

//Block
#define kWeakSelfMacro __weak typeof(self) weakSelf = self;
#define kStrongSelfMacro __strong __typeof(weakSelf)strongSelf = weakSelf;
//Cell
#define kPaddingLeftWidth 15.0
//JDBar
static NSString * const kJDBar=@"JLJDBarStyle";

#endif



