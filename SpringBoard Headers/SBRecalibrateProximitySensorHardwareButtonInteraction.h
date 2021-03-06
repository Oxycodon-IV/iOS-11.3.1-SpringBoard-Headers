//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonInteraction.h"
#import "SBProximitySensorManagerObserver.h"

@class NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>
{
    _Bool _didResetProxCalibration;
    SBProximitySensorManager *_sensorManager;
}

- (void).cxx_destruct;
- (_Bool)_disallowsAnyPressForReason:(id *)arg1;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeSinglePressUp;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
@property(nonatomic) _Bool didResetProxCalibration; // @synthesize didResetProxCalibration=_didResetProxCalibration;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithProximitySensorManager:(id)arg1;
@property(retain, nonatomic) SBProximitySensorManager *sensorManager; // @synthesize sensorManager=_sensorManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

