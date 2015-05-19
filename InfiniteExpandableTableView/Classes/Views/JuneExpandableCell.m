//
//  JuneExpandableCell.m
//  ExpandableTable
//
//  Created by naodongjiaolian on 15/5/18.
//  Copyright (c) 2015年 Manpreet Singh. All rights reserved.
//

#import "JuneExpandableCell.h"
@interface JuneExpandableCell(){
    UIImageView * _iv;
}

@end


@implementation JuneExpandableCell

- (void)awakeFromNib {
    // Initialization code
}

//init的时候就要addSubview
-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier{
    if (self=[super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        _iv=[[UIImageView alloc]initWithImage:JuneExpandableCellArrowImage];
        
        [self.contentView addSubview:_iv];
    }
    return self;
}

-(void)setItem:(JuneExpandableItem *)item{
    _item=item;
    self.textLabel.text=item.name;
    self.detailTextLabel.text= [NSString stringWithFormat:@"level: %ld   parentItem.name:%@",item.level,item.parentItem.name];
}
-(void)layoutSubviews{
    [super layoutSubviews];
    
    //设置内部imageView位置.如果canExpand，显示iv,否则隐藏
    if(_item.canExpand){
        _iv.hidden=NO;
        _iv.centerY=self.contentView.centerY;
        _iv.left=5;
        if (_item.isExpanded) {
            _iv.transform=CGAffineTransformRotate(CGAffineTransformIdentity, M_PI/2);
        }else{
            _iv.transform=CGAffineTransformIdentity;
        }
    }else{
        _iv.hidden=YES;
    }
    //设置缩进
    float indentPoints=self.item.level * indentSpacePerLevel;
    self.contentView.left=indentPoints;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
