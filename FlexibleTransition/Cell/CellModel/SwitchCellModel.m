//
//  SwitchCellModel.m
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import "SwitchCellModel.h"

@implementation SwitchCellModel

@synthesize type, rowHeigth;
@synthesize name;


- (void)setSwitchOn:(BOOL)on{
    
    self.on = on;
    
    id<CellStateChange> strongDelegate = self.delegate;
    
    if([strongDelegate respondsToSelector:@selector(didChangeStateToOn:AndPropertyRelated:)]){
        
        [strongDelegate didChangeStateToOn:on AndPropertyRelated:self.type];
    }
}

@end
