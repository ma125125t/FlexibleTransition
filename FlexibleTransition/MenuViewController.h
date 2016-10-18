//
//  MenuViewController.h
//  FlexibleTransition
//
//  Created by fang on 11/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ElasticTransition.h"

@interface MenuViewController : UIViewController <ElasticMenuTransitionDelegate>

@property (nonatomic, weak) IBOutlet UITextView *textView;
@property (nonatomic, weak) IBOutlet UITextView *codeView2;

@end
