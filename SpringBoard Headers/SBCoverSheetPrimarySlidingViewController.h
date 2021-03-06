//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBCoverSheetSlidingViewController.h"

#import "SBGrabberTongueDelegate.h"
#import "SBReachabilityObserver.h"

@class NSString, SBCoverSheetBlurView, SBCoverSheetPanelBackgroundContainerView, SBCoverSheetParallaxContainerView, SBFTouchPassThroughView, SBGrabberTongue, SBWallpaperEffectView;

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver>
{
    id <SBCoverSheetGrabberDelegate> _grabberDelegate;
    SBFTouchPassThroughView *_unlockedContentOverlayView;
    SBCoverSheetPanelBackgroundContainerView *_panelBackgroundContainerView;
    SBFTouchPassThroughView *_parallaxClippingView;
    SBCoverSheetParallaxContainerView *_parallaxContainerView;
    SBGrabberTongue *_grabberTongue;
    SBCoverSheetBlurView *_panelCoverSheetBlurView;
    SBWallpaperEffectView *_panelWallpaperEffectView;
    SBWallpaperEffectView *_panelFadeOutWallpaperEffectView;
    double _defaultPresentGestureEdgeRegionSize;
}

- (void).cxx_destruct;
- (struct CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(_Bool)arg2;
- (void)_beginTransitionFromAppeared:(_Bool)arg1;
- (void)_createFadeOutWallpaperEffectView;
- (void)_createWallpaperEffectViewFullScreen:(_Bool)arg1;
- (void)_endTransitionToAppeared:(_Bool)arg1;
- (void)_positionSubviewsForContentFrame:(struct CGRect)arg1 forPresentationValue:(_Bool)arg2;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (void)_updateWindowVisibility;
@property(nonatomic) double defaultPresentGestureEdgeRegionSize; // @synthesize defaultPresentGestureEdgeRegionSize=_defaultPresentGestureEdgeRegionSize;
@property(nonatomic) __weak id <SBCoverSheetGrabberDelegate> grabberDelegate; // @synthesize grabberDelegate=_grabberDelegate;
@property(retain, nonatomic) SBGrabberTongue *grabberTongue; // @synthesize grabberTongue=_grabberTongue;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueDidDismiss:(id)arg1;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (_Bool)grabberTongueRequiredForWholeEdge:(id)arg1;
- (_Bool)grabberTongueRequiredOutsideGrabberFreeRegion:(id)arg1;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)loadView;
@property(retain, nonatomic) SBCoverSheetPanelBackgroundContainerView *panelBackgroundContainerView; // @synthesize panelBackgroundContainerView=_panelBackgroundContainerView;
@property(retain, nonatomic) SBCoverSheetBlurView *panelCoverSheetBlurView; // @synthesize panelCoverSheetBlurView=_panelCoverSheetBlurView;
@property(retain, nonatomic) SBWallpaperEffectView *panelFadeOutWallpaperEffectView; // @synthesize panelFadeOutWallpaperEffectView=_panelFadeOutWallpaperEffectView;
@property(retain, nonatomic) SBWallpaperEffectView *panelWallpaperEffectView; // @synthesize panelWallpaperEffectView=_panelWallpaperEffectView;
@property(retain, nonatomic) SBFTouchPassThroughView *parallaxClippingView; // @synthesize parallaxClippingView=_parallaxClippingView;
@property(retain, nonatomic) SBCoverSheetParallaxContainerView *parallaxContainerView; // @synthesize parallaxContainerView=_parallaxContainerView;
@property(retain, nonatomic) SBFTouchPassThroughView *unlockedContentOverlayView; // @synthesize unlockedContentOverlayView=_unlockedContentOverlayView;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

