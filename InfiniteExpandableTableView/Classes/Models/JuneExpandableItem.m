//
//  JuneExpandableItem.m
//  ExpandableTable
//
//  Created by naodongjiaolian on 15/5/18.
//  Copyright (c) 2015年 Manpreet Singh. All rights reserved.
//

#import "JuneExpandableItem.h"
#import "APUtils.h"

@implementation JuneExpandableItem

-(BOOL)canExpand{
    if (self.subItems&&self.subItems.count>0) {
        return YES;
    }else{
        return NO;
    }
}

-(NSArray *)ancestors{
    NSMutableArray * ma=[NSMutableArray array];
    JuneExpandableItem * currentItem=self;
    while (currentItem.parentItem) {
        [ma addObject:currentItem.parentItem];
        currentItem=currentItem.parentItem;
    }
    return ma;
}
- (NSString *)description{
    return @{@"id":_id,
             @"name":_name,
             @"level":@(_level)}.description;
    
}


//此方法针对的是 trainer/NewPrivateLessons/getCategoryList 接口。可以修改为其他任意级展开列表，只需要换key。
+(NSMutableArray *)itemsArrayWithJSONArray:(NSArray *)jsonArray{ //jsonArray直接来自一个jsonString
        NSMutableArray * ma=[NSMutableArray arrayWithArray:jsonArray];
        for (int i=0; i<ma.count; i++) {//循环找到一级item
            JuneExpandableItem * item=[JuneExpandableItem fromJson:ma[i]];
            NSArray * sportTypes=ma[i][@"sportTypes"]; //sportTypes
            if (ma[i][@"sportTypes"] && [sportTypes isKindOfClass:[NSArray class]] && sportTypes.count>0) {//如果有sportTypes，且数组count>0，就从sportTypes创建subItems
                item.subItems=[self itemsArrayWithJSONArray:sportTypes];
            }
            ma[i]=item;
        }
    return ma;
}

@end
