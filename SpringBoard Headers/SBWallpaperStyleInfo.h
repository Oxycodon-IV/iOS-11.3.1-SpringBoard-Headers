//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSString, SBWallpaperEffectView;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding>
{
    CDStruct_e838e30c _priorityInfo[12];
    SBWallpaperEffectView *_wallpaperEffectView;
    CDStruct_059c2b36 _styleTransitionState;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateValidPrioritiesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long highestValidPriority;
- (id)init;
- (CDStruct_e838e30c)priorityInfoForPriority:(long long)arg1;
- (void)removePriorityInfoForPriority:(long long)arg1;
- (void)setPriorityInfo:(CDStruct_e838e30c)arg1 forPriority:(long long)arg2;
@property(nonatomic) CDStruct_059c2b36 styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
