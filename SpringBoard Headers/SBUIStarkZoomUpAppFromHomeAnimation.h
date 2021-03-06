//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

#import "SBIconAnimatorDelegate.h"

@class NSString, SBAlert, SBIconAnimator, UIView;

@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate>
{
    UIView *_viewToAnimate;
    SBIconAnimator *_iconAnimator;
    SBAlert *_alertImpersonator;
    _Bool _animationFinished;
    _Bool _fromAssistant;
    _Bool _folderIsDisplayingIcon;
}

- (void).cxx_destruct;
- (void)_animateZoomWithCompletion:(CDUnknownBlockType)arg1;
- (double)_animationDelay;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (void)_cleanupAnimation;
- (void)_cleanupHosting;
- (id)_iconAnimationSettings;
- (void)_noteDependencyDidInvalidate;
- (void)_noteZoomDidFinish;
- (void)_prepareAnimation;
- (void)_prepareZoom;
- (id)_progressDependencies;
- (void)_setReferenceIconViewIsInTransitionIfAppropriate:(_Bool)arg1;
- (void)_startAnimation;
- (id)_viewToAnimate;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)animationSettings;
- (void)dealloc;
- (void)iconAnimatorWasInvalidated:(id)arg1;
- (id)initWithToApplicationSceneEntity:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

