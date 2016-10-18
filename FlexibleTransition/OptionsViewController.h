//
//  OptionsViewController.h
//  FlexibleTransition
//
//  Created by fang on 11/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ElasticTransition.h"

@interface OptionsViewController : UIViewController <ElasticMenuTransitionDelegate, UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) IBOutlet UITableView *tableView;

@end
