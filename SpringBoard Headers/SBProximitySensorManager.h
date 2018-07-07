//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIActiveOrientationObserver.h"

@class NSHashTable, NSMutableSet, NSString, SBHardwareDefaults, SpringBoard;

@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver>
{
    NSMutableSet *_clientsWantingDetectionEnabled;
    id <SBProximitySensorControlling> _hidInterface;
    SBHardwareDefaults *_hardwareDefaults;
    _Bool _proximityDetectionEnabled;
    _Bool _proximityDetectionPermitted;
    _Bool _objectInProximity;
    int _backboardNotificationToken;
    NSHashTable *_observers;
    SpringBoard *_interfaceOrientationProvider;
}

- (void).cxx_destruct;
- (_Bool)_clientsWantDetectionEnabled;
- (void)_destroy;
- (void)_disableProx;
- (void)_enableProx;
@property(retain, nonatomic, getter=_interfaceOrientationProvider, setter=_setInterfaceOrientationProvider:) SpringBoard *interfaceOrientationProvider; // @synthesize interfaceOrientationProvider=_interfaceOrientationProvider;
- (void)_reloadDefaults;
@property(nonatomic, getter=isObjectInProximity, setter=_setObjectInProximity:) _Bool objectInProximity; // @synthesize objectInProximity=_objectInProximity;
@property(nonatomic, getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:) _Bool proximityDetectionEnabled; // @synthesize proximityDetectionEnabled=_proximityDetectionEnabled;
@property(nonatomic, getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:) _Bool proximityDetectionPermitted; // @synthesize proximityDetectionPermitted=_proximityDetectionPermitted;
- (void)_updateProxState;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 wantsProximityDetectionEnabled:(_Bool)arg2;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithHIDInterface:(id)arg1 hardwareDefaults:(id)arg2 interfaceOrientationProvider:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)resetProximityCalibration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
