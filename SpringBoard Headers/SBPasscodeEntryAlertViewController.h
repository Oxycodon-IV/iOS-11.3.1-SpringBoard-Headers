//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBFAuthenticationResponder.h"
#import "SBIdleBehaviorProviding.h"
#import "SBPasscodeEntryAlertViewDelegate.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "SBWorkspaceAlertAnimationProviding.h"

@class NSString;

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate, SBFAuthenticationResponder, SBPasscodeEntryAlertViewDelegate, SBIdleBehaviorProviding, SBWorkspaceAlertAnimationProviding>
{
    _Bool _wantsToHandleItsOwnAnimation;
    id <SBPasscodeEntryAlertViewControllerDelegate> _delegate;
    _Bool _attemptingUnlock;
    id <SBUIPasscodeLockView> _passcodeRequester;
    _Bool _showEmergencyCallButton;
    _Bool _useBiometricPresentation;
    _Bool _animatePasscodePresentation;
    NSString *_unlockDestination;
}

- (void).cxx_destruct;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;
- (void)_authenticationCancelled;
- (void)_authenticationFailure:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationSuccess:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_configurePasscodeView:(id)arg1;
- (id)_displayLayoutElementIdentifier;
- (id)_passcodeEntryAlertView;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (void)_presentEmergencyCall;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
@property(nonatomic) _Bool animatePasscodePresentation; // @synthesize animatePasscodePresentation=_animatePasscodePresentation;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SBPasscodeEntryAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (_Bool)hasTranslucentBackground;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)passcodeAlertViewShouldAnimatePresentation:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
@property(nonatomic) _Bool showEmergencyCallButton; // @synthesize showEmergencyCallButton=_showEmergencyCallButton;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic) _Bool useBiometricPresentation; // @synthesize useBiometricPresentation=_useBiometricPresentation;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool wantsToHandleItsOwnAnimation; // @synthesize wantsToHandleItsOwnAnimation=_wantsToHandleItsOwnAnimation;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

