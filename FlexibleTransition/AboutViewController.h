//
//  AboutViewController.h
//  FlexibleTransition
//
//  Created by fang on 11/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ElasticTransition.h"

@interface AboutViewController : UIViewController

@property (nonatomic) ElasticTransition *transition;

-(IBAction)dismiss:(id)sender;

@end


