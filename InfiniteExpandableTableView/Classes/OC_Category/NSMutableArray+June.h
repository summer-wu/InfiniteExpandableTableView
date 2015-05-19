//
//  NSMutableArray+June.h
//  JiaoLianB
//
//  Created by naodongjiaolian on 15/5/19.
//  Copyright (c) 2015年 naodongjiaolian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (June)
-(void)insertObjects:(NSArray *)objects afterIndex:(NSUInteger)index;
-(void)insertObjects:(NSArray *)objects afterObject:(NSObject *)obj;


@end
