//
//  ElasticShapeLayer.h
//  FlexibleTransition
//
//  Created by fang on 11/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "Utils.h"

@interface ElasticShapeLayer : CAShapeLayer

@property (nonatomic) Edge edge;
@property (nonatomic) CGPoint dragPoint;
@property (nonatomic) CGFloat radiusFactor;

@end
