//
//  ToolsViewController.h
//  TheSolarSystemDemo
//
//  Created by 120v on 2018/2/26.
//  Copyright © 2018年 MQ. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol ToolsDelegate <NSObject>

@required
-(void)positionXDidChanged:(CGFloat)value;
-(void)positionYDidChanged:(CGFloat)value;
-(void)positionZDidChanged:(CGFloat)value;
-(void)eulerAnglesXDidChanged:(CGFloat)value;
-(void)eulerAnglesYDidChanged:(CGFloat)value;
-(void)eulerAnglesZDidChanged:(CGFloat)value;
-(void)scaleXDidChanged:(CGFloat)value;
-(void)scaleYDidChanged:(CGFloat)value;
-(void)scaleZDidChanged:(CGFloat)value;
-(void)rotationXDidChanged:(CGFloat)value;
-(void)rotationYDidChanged:(CGFloat)value;
-(void)rotationZDidChanged:(CGFloat)value;
-(void)rotationWDidChanged:(CGFloat)value;
-(void)zFarDidChanged:(CGFloat)value;
-(void)zNearDidChanged:(CGFloat)value;

@end

@interface ToolsViewController : UITableViewController<ToolsDelegate>

@property(nonatomic)id <ToolsDelegate>delegate;

@end
