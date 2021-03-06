//
//  QJOrderDataManager.h
//  Green carpenter Home
//
//  Created by duoyi on 16/11/15.
//  Copyright © 2016年 Green carpenter Home. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QJOrderListModel.h"

@class QJOrderDataManager;
@protocol QJOrderDataManagerDelegate <NSObject>

- (void)requestSuccessfull:(QJOrderDataManager *)manager;
- (void)requestFaild:(QJOrderDataManager *)manager;

@end

@interface QJOrderDataManager : NSObject

@property (nonatomic, weak)id<QJOrderDataManagerDelegate> delegate;

/// 返回个数
- (NSInteger)numOfItem;
/// 返回model
- (QJOrderListModel *)modelWithIndex:(NSInteger)index;

/// 根据订单状态加载数据
- (void)requestDataWithStatu:(NSInteger)index;

/// 取消订单
- (void)cancelOrdersWithNumber:(NSString *)numberStr;

/// 接单
- (void)receiveOrderWithNumber:(NSString *)numberStr;
#warning 没写
@end
