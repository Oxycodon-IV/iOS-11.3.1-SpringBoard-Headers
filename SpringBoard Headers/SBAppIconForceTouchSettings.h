//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBAppIconForceTouchSettings : SBUISettings
{
    _Bool _enableUIPreviewInteractionAnimations;
    float _animationDurationMultiplier;
}

+ (id)defaults;
+ (id)settingsControllerModule;
@property(nonatomic) float animationDurationMultiplier; // @synthesize animationDurationMultiplier=_animationDurationMultiplier;
@property(nonatomic) _Bool enableUIPreviewInteractionAnimations; // @synthesize enableUIPreviewInteractionAnimations=_enableUIPreviewInteractionAnimations;
- (void)setDefaultValues;

@end

