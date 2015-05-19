//
//  InfiniteExpandableTableView.m
//  InfiniteExpandableTableView
//
//  Created by naodongjiaolian on 15/5/19.
//  Copyright (c) 2015年 naodongjiaolian. All rights reserved.
//

#import "InfiniteExpandableTableViewController.h"
#import "NSMutableArray+June.h"

#import "Config.h"
@interface InfiniteExpandableTableViewController ()<UITableViewDelegate,UITableViewDataSource>{
    UITableView * _tableView;
    NSString * _jsonstr;
    NSDictionary * _jsonDict;
    NSMutableArray *_expandableItems; //一级item不能有重复的！json转化为Model过程中，即使是相同的内容也会转化为不同的实例，因为每次都会alloc一次。相同的string会转化为相同的地址。
}
@end

@implementation InfiniteExpandableTableViewController
-(void)viewDidLoad{
    _jsonstr=[NSString stringWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"jsonstr.json" ofType:nil] encoding:NSUTF8StringEncoding error:nil];
    self.tableView.contentInset=UIEdgeInsetsMake(20, 0, 0, 0);
    _jsonDict=[NSDictionary dictionaryWithJSON:_jsonstr];
    _expandableItems=[JuneExpandableItem itemsArrayWithJSONArray:_jsonDict[@"data"]];
    
}


-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return _expandableItems.count;
}
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    JuneExpandableItem * item =_expandableItems[indexPath.row];
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if(!item.canExpand) return; //如果不能展开，直接返回
    
    if (item.isExpanded) { //如果已经展开了
        [self collapseItemAtIndexPath:indexPath];
    }else{ //还没有展开，则展开
        [self expandItem:item];
    }
    [tableView reloadData];
}

-(void)collapseItemAtIndexPath:(NSIndexPath*)indexPath{
    JuneExpandableItem * item =_expandableItems[indexPath.row];
    NSMutableIndexSet * setToDelete=[[NSMutableIndexSet alloc]init];
    for (int i=indexPath.row+1; i<_expandableItems.count; i++) {
        JuneExpandableItem * currentItem=_expandableItems[i];
        if ([currentItem.ancestors containsObject:item]) {
            [setToDelete addIndex:i];
        }else{
            break;
        }
    }
    [_expandableItems removeObjectsAtIndexes:setToDelete];
    item.isExpanded=NO;
}
//这个方法循环次数太多，有待优化。
-(void)expandItem:(JuneExpandableItem *)item{
    NSMutableArray * toExpandItemsMa=[NSMutableArray array]; //待展开item
    //循环subItems，修改subItem的level和parentItem。
    for (int i=0; i<item.subItems.count; i++) {
        JuneExpandableItem * subItem=item.subItems[i];
        subItem.level=item.level+1;
        subItem.parentItem=item;
        //如果subItem.isExpanded＝YES，就记录一下。在插入完二级item之后，再插入这些三级item
        if (subItem.isExpanded) {
            [toExpandItemsMa addObject:subItem];
        }
    }
    //插入二级item
    [_expandableItems insertObjects:item.subItems afterObject:item];
    //上面的操作只能插入二级item，还没有展开，在这里展开二级item
    for (int i=0; i<toExpandItemsMa.count; i++) {//循环subItems，展开isExpanded＝YES的item
        [self expandItem:toExpandItemsMa[i]];
    }
    item.isExpanded=YES;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    JuneExpandableCell * cell=[tableView dequeueReusableCellWithIdentifier:@"cell"];
    if(!cell){
        cell=[[JuneExpandableCell alloc]initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"cell"];
    }
    [cell setItem:_expandableItems[indexPath.row]];
    return cell?:[UITableViewCell new];
}



@end

