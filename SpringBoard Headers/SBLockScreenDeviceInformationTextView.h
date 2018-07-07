//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUILegibility.h"

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenDeviceInformationTextView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    UIView *_containerView;
    NSString *_supervisionText;
    SBUILegibilityLabel *_supervisionLabel;
    NSArray *_deviceInformationText;
    SBUILegibilityLabel *_deviceInformationLabel;
}

- (void).cxx_destruct;
- (double)_deviceInformationLabelFontLeading;
- (double)_deviceInformationParagraphSpacing;
- (id)_labelFont;
- (void)_updateDeviceInformationLabel;
- (void)_updateSupervisionLabel;
@property(copy, nonatomic) NSArray *deviceInformationText; // @synthesize deviceInformationText=_deviceInformationText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(copy, nonatomic) NSString *supervisionText; // @synthesize supervisionText=_supervisionText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
