//
//  JuneExpandableItem.h
//  ExpandableTable
//
//  Created by naodongjiaolian on 15/5/18.
//  Copyright (c) 2015年 Manpreet Singh. All rights reserved.
//
/*
    属性id、name、subItems、canExpand(便利方法)、isExpanded、parentItem、level
    方法-ancestors
 
 点击展开，设置isExpanded=!isExpanded,并插入subItems到一级cellArray
 点击关闭，设置isExpanded=!isExpanded。在当前item下面开始for循环，[item.ancestors contains:item0]如果为no，break for循环。这样可以保证循环最少。
 */
#import <Foundation/Foundation.h>

@interface JuneExpandableItem : NSObject
@property (nonatomic,strong) NSString * id;
@property (nonatomic,strong) NSString * name;
@property (nonatomic,strong) NSArray * subItems;
@property (nonatomic,assign) BOOL canExpand;
@property (nonatomic,assign) BOOL isExpanded;
@property (nonatomic,strong) JuneExpandableItem * parentItem;//点击展开item0的时候，设置item0.1的parentItem。关闭的时候不修改。level从0开始。

@property (nonatomic,assign) NSUInteger level;//点击展开item0的时候，插入的时候修改item0.1的level。关闭的时候不修改。level从0开始。
-(NSArray *)ancestors;
+(NSMutableArray *)itemsArrayWithJSONArray:(NSArray *)jsonArray;

@end
