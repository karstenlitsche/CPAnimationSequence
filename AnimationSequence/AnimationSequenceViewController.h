
//  Created by Yang Meyer on 26.07.11.
//  Copyright 2011-2012 compeople AG. All rights reserved.

#import <UIKit/UIKit.h>

@class CPAnimationSequence;

@interface AnimationSequenceViewController : UIViewController

// If you need to target iOS 4.3, use `unsafe_unretained` instead of `weak` (or use `strong` and release the views appropriately).
@property (nonatomic, weak) IBOutlet UIView* theBox;
@property (nonatomic, weak) IBOutlet UIButton* startButton;
@property (nonatomic, weak) IBOutlet UIButton* revertButton;

@property (weak, nonatomic) IBOutlet UILabel* labelHeader;
@property (weak, nonatomic) IBOutlet UILabel* labelStep1;
@property (weak, nonatomic) IBOutlet UILabel* labelStep2;
@property (weak, nonatomic) IBOutlet UILabel* labelStep3;

@property (nonatomic, weak) IBOutlet UIView* theIndicator;

- (IBAction) startAnimation;
- (IBAction) revertAnimation;

@end
