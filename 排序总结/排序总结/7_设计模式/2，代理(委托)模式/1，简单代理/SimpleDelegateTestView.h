//
//  SimpleDelegateTestView.h
//  排序总结
//
//  Created by gjfax on 2018/9/10.
//  Copyright © 2018年 macheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleDelegateTestView : UIView


- (instancetype)initWithDelegate:(id)delegate;

@property(nonatomic,weak) id delegate;

-(void)getTheCurrentViewName:(NSString *)string;

@end


