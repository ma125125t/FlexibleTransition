//
//  SliderCell.m
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import "SliderCell.h"

@implementation SliderCell

@synthesize type, rowHeigth;

- (id)initWithCoder:(NSCoder *)aDecoder
{
    self = [super initWithCoder:aDecoder];
    
    if (self) {
        
        self.rowHeigth  = 62.0;
    }
    
    return self;
}

-(IBAction)sliderChanged:(UISlider*)sender{
    
    [self onChangeValue:sender.value];
}

-(void)onChangeValue:(CGFloat)value{
    
}

@end
