//
//  ViewController.h
//  TableViewTry2
//
//  Created by Brian Poor on 1/3/17.
//  Copyright © 2017 Brian Poor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LunchConnector.h"

@interface ViewController : UIViewController <UITableViewDataSource,UITableViewDelegate>{
    
}
@property (strong, nonatomic) LunchConnector *connectorClass;

@end

