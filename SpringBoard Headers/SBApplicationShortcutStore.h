//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLock, NSObject<OS_dispatch_queue>, NSString;

@interface SBApplicationShortcutStore : NSObject
{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    unsigned long long _cachedVersion;
    _Bool _isLoaded;
    _Bool _isDirty;
    NSString *_bundleIdentifier;
}

+ (id)_storeURL;
+ (void)clearStore;
- (void).cxx_destruct;
- (id)_applicationShortcutItemsFromPlistArray:(id)arg1;
- (id)_plistArrayFromApplicationShortcutItems:(id)arg1;
- (void)_saveQueue_save;
- (void)_stateLock_loadFromDiskIfNeeded;
- (void)_stateLock_markDirty;
- (id)_url;
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateCache;
@property(readonly, copy, nonatomic) NSArray *languages;
- (void)saveSynchronously;
- (void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long version;

@end

