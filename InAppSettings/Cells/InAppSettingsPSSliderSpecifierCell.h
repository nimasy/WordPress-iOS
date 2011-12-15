//
//  PSToggleSwitchSpecifier.h
//  InAppSettingsTestApp
//
//  Created by David Keegan on 11/21/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InAppSettingsTableCell.h"

@interface InAppSettingsPSSliderSpecifierCell : InAppSettingsTableCell {
    UISlider *valueSlider;
}

@property (nonatomic, retain) UISlider *valueSlider;

- (void)slideAction;

@end
