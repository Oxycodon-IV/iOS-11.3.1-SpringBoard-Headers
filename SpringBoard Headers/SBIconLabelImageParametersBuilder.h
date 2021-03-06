//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBIcon, SBIconView, _UILegibilitySettings;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    _Bool _accessibilityIncreaseContrastEnabled;
    _Bool _wantsFocusHighlight;
    SBIcon *_icon;
    SBIconView *_iconView;
    id <SBIconViewDelegate> _iconViewDelegate;
    Class _iconViewClass;
    long long _iconLocation;
    _UILegibilitySettings *_settings;
    NSString *_text;
}

- (void).cxx_destruct;
- (_Bool)_canEllipsizeLabel;
- (_Bool)_canTightenLabel;
- (_Bool)_canUseMemoryPool;
- (id)_focusHighlightColor;
- (long long)_fontSizeParameterForContentSizeCategory:(id)arg1;
- (id)_fontWithLanguageInsets:(struct UIEdgeInsets *)arg1;
- (_Bool)_hasValidInputs;
- (struct UIEdgeInsets)_insetsForFont:(id)arg1;
- (struct CGSize)_maxSize;
- (double)_normalFontSizeForSizeParameter:(long long)arg1;
- (double)_scale;
@property(nonatomic) _Bool accessibilityIncreaseContrastEnabled; // @synthesize accessibilityIncreaseContrastEnabled=_accessibilityIncreaseContrastEnabled;
- (id)buildParameters;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(nonatomic) __weak id <SBIconViewDelegate> iconViewDelegate; // @synthesize iconViewDelegate=_iconViewDelegate;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 forLocation:(long long)arg2;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool wantsFocusHighlight; // @synthesize wantsFocusHighlight=_wantsFocusHighlight;

@end

