//
//  NSMutableArray+June.m
//  JiaoLianB
//
//  Created by naodongjiaolian on 15/5/19.
//  Copyright (c) 2015年 naodongjiaolian. All rights reserved.
//

#import "NSMutableArray+June.h"

@implementation NSMutableArray (June)
-(void)insertObjects:(NSArray *)objects afterIndex:(NSUInteger)index{
    if (objects.count==0) {
        return;
    }
    NSIndexSet * is=[NSIndexSet indexSetWithIndexesInRange:NSMakeRange(index+1, objects.count)];
    [self insertObjects:objects atIndexes:is];
}

-(void)insertObjects:(NSArray *)objects afterObject:(NSObject *)obj{
    NSUInteger index=[self indexOfObjectIdenticalTo:obj];
    if (index!=NSNotFound) {
        [self insertObjects:objects afterIndex:index];
    }
}

@end
