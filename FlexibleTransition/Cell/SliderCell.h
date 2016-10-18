//
//  SliderCell.h
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellDimensionAndTypeDelegate.h"

@interface SliderCell : UITableViewCell <CellDimensionAndTypeDelegate>

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UISlider *slider;

-(IBAction)sliderChanged:(UISlider*)sender;

@end
