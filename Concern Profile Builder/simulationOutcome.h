//
//  simulationOutcome.h
//  XYPieChart
//
//  Created by Tia on 11/18/13.
//  Copyright (c) 2013 Xiaoyang Feng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface simulationOutcome : NSObject
-(id) initWith: (NSString*)retrievedData view: (UIView*) myView;
@property NSMutableArray * simOutcome;
@property UIView * myView;
@end
