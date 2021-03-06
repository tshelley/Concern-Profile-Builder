//
//  EcoValFirstViewController.h
//  Concern Profile Builder
//
//  Created by Tia on 11/22/13.
//  Copyright (c) 2013 Tia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYPieChart.h"
#import "PieChartHandles.h"
#import "simulationOutcome.h"

@interface EcoValFirstViewController : UIViewController <XYPieChartDelegate, XYPieChartDataSource>


@property (strong, nonatomic) IBOutlet XYPieChart * pieChartLeft;
@property(strong, nonatomic) IBOutlet UITextField * publicInstall;
@property(strong, nonatomic) IBOutlet UITextField * privateInstall;
@property(strong, nonatomic) IBOutlet UITextField * publicMaintenance;
@property(strong, nonatomic) IBOutlet UITextField * privateMaintenance;
@property(strong, nonatomic) IBOutlet UITextField * wasteWaterTreatment;
@property(strong, nonatomic) IBOutlet UITextField * basementFlooding;

@property(strong, nonatomic) IBOutlet UITextField * runOff;
@property(strong, nonatomic) IBOutlet UITextField * waterInSewers;
@property(strong, nonatomic) IBOutlet UITextField * waterInAllGI;
@property(strong, nonatomic) IBOutlet UITextField * waterInRoofs;
@property(strong, nonatomic) IBOutlet UITextField * waterInBarrels;
@property(strong, nonatomic) IBOutlet UITextField * waterInSwales;
@property(strong, nonatomic) IBOutlet UITextField * waterInAlleys;
@property(strong, nonatomic) IBOutlet UITextField * mostStandingWater;
@property(strong, nonatomic) IBOutlet UITextField * deepestPuddle;

@property(strong, nonatomic) IBOutlet UITextField * timeFlooded;
@property(strong, nonatomic) IBOutlet UITextField * minorFloodTime;
@property(strong, nonatomic) IBOutlet UITextField * majorFloodTime;
@property(strong, nonatomic) IBOutlet UITextField * minorFloodingTime;
@property(strong, nonatomic) IBOutlet UITextField * majorFloodingTime;

@property (strong, nonatomic) IBOutlet UISegmentedControl *indexOfSlices;
@property(nonatomic, strong) NSMutableArray *slices;
@property(nonatomic, strong) NSArray        *sliceColors;
@property(nonatomic, strong) NSArray *textFields;
@property (strong, nonatomic) IBOutlet UITextField *studyID;
@property(nonatomic, strong) IBOutlet UIButton *updateButton;
@property (strong, nonatomic) IBOutlet UIButton *resetButton;
@property(nonatomic) NSInteger numOfSlices;
@property(strong, nonatomic) UIView *circleView;
@property (strong, nonatomic) IBOutlet UIButton *saveProfileButton;
@property (strong, nonatomic) IBOutlet UITextField * areaFlooded;
@property (strong, nonatomic) IBOutlet UIView *concernProfileView;
@property (strong, nonatomic) IBOutlet UITextField * waterInfiltrated;
@property(strong, nonatomic) IBOutlet UITextField * waterStored;
@property(strong, nonatomic) IBOutlet UITextField * amountInfiltrated;
@property (strong, nonatomic) NSMutableArray * concernProfiles;
@property simulationOutcome *outcome;
@end
