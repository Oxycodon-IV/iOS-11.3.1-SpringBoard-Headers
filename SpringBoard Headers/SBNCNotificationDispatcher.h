//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDashBoardViewControllerObserver.h"
#import "SBNotificationExtensionVisibilityProviding.h"

@class NCBulletinNotificationSource, NCNotificationDispatcher, NSString, SBLockScreenManager, SBLockStateAggregator, SBNCAlertingController, SBNCNotificationDispatcherDelegate, SBNotificationBannerDestination, SBNotificationCenterDestination, SBNotificationLegacyCarDestination, SBQuietModeStateAggregator, SBUserAlertNotificationSource, SBWalletNotificationSource;

@interface SBNCNotificationDispatcher : NSObject <SBDashBoardViewControllerObserver, SBNotificationExtensionVisibilityProviding>
{
    SBNotificationBannerDestination *_bannerDestination;
    id <SBNotificationDestination> _dashBoardDestination;
    SBWalletNotificationSource *_walletNotificationSource;
    SBNotificationCenterDestination *_notificationCenterDestination;
    NCNotificationDispatcher *_dispatcher;
    SBNCNotificationDispatcherDelegate *_dispatcherDelegate;
    NCBulletinNotificationSource *_notificationSource;
    SBUserAlertNotificationSource *_userNotificationAlertSource;
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
    SBNotificationLegacyCarDestination *_carDestination;
    SBNCAlertingController *_alertingController;
}

- (void).cxx_destruct;
- (_Bool)_isCarPlayActive;
- (_Bool)_lockScreenWantsBanners;
- (void)_setupLegacyDestinationsForDispatcher:(id)arg1 lockScreenManager:(id)arg2;
- (void)_setupNewDestinationsForDispatcher:(id)arg1;
- (void)_updateActiveDestinations;
@property(retain, nonatomic) SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
@property(readonly, nonatomic) SBNotificationBannerDestination *bannerDestination; // @synthesize bannerDestination=_bannerDestination;
@property(retain, nonatomic) SBNotificationLegacyCarDestination *carDestination; // @synthesize carDestination=_carDestination;
- (void)dashBoardController:(id)arg1 didChangeActiveBehavior:(id)arg2;
@property(readonly, nonatomic) id <SBNotificationDestination> dashBoardDestination; // @synthesize dashBoardDestination=_dashBoardDestination;
@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) SBNCNotificationDispatcherDelegate *dispatcherDelegate; // @synthesize dispatcherDelegate=_dispatcherDelegate;
- (id)init;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property(readonly, nonatomic) SBNotificationCenterDestination *notificationCenterDestination; // @synthesize notificationCenterDestination=_notificationCenterDestination;
@property(retain, nonatomic) NCBulletinNotificationSource *notificationSource; // @synthesize notificationSource=_notificationSource;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) SBUserAlertNotificationSource *userNotificationAlertSource; // @synthesize userNotificationAlertSource=_userNotificationAlertSource;
@property(readonly, nonatomic) SBWalletNotificationSource *walletNotificationSource; // @synthesize walletNotificationSource=_walletNotificationSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

