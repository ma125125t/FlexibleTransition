//
//  SwitchCell.m
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import "SwitchCell.h"

@implementation SwitchCell

@synthesize cellModel;

- (void)setCellModel:(SwitchCellModel *)aCellModel{
    
    self->cellModel = aCellModel;
    
    self.nameLabel.text = aCellModel.name;
    [self.control setOn:aCellModel.on];
}

-(IBAction)switchChanged:(UISwitch*)sender{
    
    [self.cellModel setSwitchOn:sender.on];
}

@end
