//
//  SegmentCell.h
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SegmentCellModel.h"

@interface SegmentCell : UITableViewCell

@property (nonatomic) NSMutableArray *values;

@property (nonatomic, weak) IBOutlet    UILabel            *nameLabel;
@property (nonatomic) IBOutlet          UISegmentedControl *segment;
@property (nonatomic, weak)             SegmentCellModel   *cellModel;

-(IBAction)segmentChanged:(UISegmentedControl*)sender;

@end
