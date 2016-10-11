//
//  MessageHeadView.h
//  MACProject
//
//  Created by MacKun on 16/9/23.
//  Copyright © 2016年 com.mackun. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FriendsMessageModel;
@protocol MessageHeadViewDelegate <NSObject>

@optional

@end
@interface MessageHeadView : UITableViewHeaderFooterView

/**
 *  NSIndexPath下标
 */
@property(nonatomic,assign) NSIndexPath *indexPath;

@property(nonatomic,weak) id<MessageHeadViewDelegate> delegate;

@property(nonatomic,strong) FriendsMessageModel *model;


@end
