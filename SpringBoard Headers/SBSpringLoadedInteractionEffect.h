//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UISpringLoadedInteractionEffect.h"

@class NSString;

@interface SBSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id <UISpringLoadedInteractionEffect> _blinkEffect;
    _Bool _useFastBlinkAnimation;
    id <SBSpringLoadedInteractionEffectDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBSpringLoadedInteractionEffectDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fastBlinkAnimation;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
@property(nonatomic) _Bool useFastBlinkAnimation; // @synthesize useFastBlinkAnimation=_useFastBlinkAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

