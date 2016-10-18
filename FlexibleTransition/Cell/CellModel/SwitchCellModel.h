//
//  SwitchCellModel.h
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CellDimensionAndTypeDelegate.h"

@protocol CellStateChange;

@interface SwitchCellModel : NSObject <CellDimensionAndTypeDelegate>

@property (nonatomic) BOOL on;
@property (nonatomic, weak) id<CellStateChange> delegate;

- (void)setSwitchOn:(BOOL)on;

@end


@protocol CellStateChange <NSObject>

@optional
-(void)didChangeStateToOn:(BOOL)on AndPropertyRelated:(PropertyRelated)property;

@end
