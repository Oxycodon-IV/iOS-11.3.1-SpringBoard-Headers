//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMesaUnlockTrigger.h"

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger
{
    BSTimer *_slowPressTimer;
    _Bool _bioUnlockOccurredWhileTimerWasRunning;
    _Bool _buttonIsDown;
    _Bool _fingerIsOn;
    double _slowPressDuration;
}

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_evaluateUnlock;
- (_Bool)_isPrimed;
- (_Bool)_isTimerRunning;
@property(retain, nonatomic, getter=_slowPressTimer, setter=_setSlowPressTimer:) BSTimer *slowPressTimer; // @synthesize slowPressTimer=_slowPressTimer;
- (void)_startTimer;
- (void)_timerFired;
- (_Bool)bioUnlock;
- (id)description;
- (void)fingerOff;
- (id)init;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)screenOff;
@property(nonatomic) double slowPressDuration; // @synthesize slowPressDuration=_slowPressDuration;
- (id)succinctDescriptionBuilder;

@end

