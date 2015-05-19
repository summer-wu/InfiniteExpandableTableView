//
//  AppDelegate.m
//  InfiniteExpandableTableView
//
//  Created by naodongjiaolian on 15/5/19.
//  Copyright (c) 2015年 naodongjiaolian. All rights reserved.
//

#import "AppDelegate.h"
#import "Config.h"
#import "InfiniteExpandableTableViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    //打印运行目录
    BLog(@"%@",NSHomeDirectory());
    BLog(@"%@",[NSBundle mainBundle].bundlePath);
    //查看当前plis信息
    NSLocale *currentLocale = [NSLocale currentLocale];
    NSLog(@"Country Code is %@", [currentLocale objectForKey:NSLocaleCountryCode]);
    NSLog(@"Language Code is %@", [currentLocale objectForKey:NSLocaleLanguageCode]);
    NSString * infoplistPath=[[NSBundle mainBundle].bundlePath stringByAppendingPathComponent:@"info.plist"];
    NSDictionary * d=[NSDictionary dictionaryWithContentsOfFile:infoplistPath];
    BLog(@"info.plist:%@",d);
    
    //1. 设置AppDelegate.window
    self.window=[[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];

    self.window.rootViewController=[InfiniteExpandableTableViewController new];
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
