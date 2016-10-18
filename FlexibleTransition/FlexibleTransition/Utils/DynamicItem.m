//
//  DinamicItem.m
//  FlexibleTransition
//
//  Created by fang on 11/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import "DynamicItem.h"

@implementation DynamicItem

- (id)init{
    
    self = [super init];
    
    if (self){
        
        self.center     = CGPointZero;
        self.bounds     = CGRectMake(0, 0, 1, 1);
        self.transform  = CGAffineTransformIdentity;
    }
    
    return self;
}

- (id)initWithCenter:(CGPoint) center{
    
    self = [super init];
    
    if (self){
        
        self.center     = center;
        self.bounds     = CGRectMake(0, 0, 1, 1);
        self.transform  = CGAffineTransformIdentity;
    }
    
    return self;
}

@end
