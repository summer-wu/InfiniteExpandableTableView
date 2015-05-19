//
//  JuneExpandableCell.h
//  ExpandableTable
//
//  Created by naodongjiaolian on 15/5/18.
//  Copyright (c) 2015年 Manpreet Singh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JuneExpandableItem.h"
#import "APUtils.h"

static const NSUInteger indentSpacePerLevel=10; //每一级都缩进10pt。
#define JuneExpandableCellArrowImage [UIImage imageNamed:@"qq_arrow10x10"]

@interface JuneExpandableCell : UITableViewCell
//修改界面显示。setItem是修改textLabel
@property (nonatomic,weak) JuneExpandableItem * item;


@end
