//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughView.h"

@class SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    UIView *_containerView;
    UIView *_crossfadeContainerView;
    SBIconImageView *_iconImageView;
    UIView *_crossfadeView;
    double _containerScaleX;
    double _containerScaleY;
    double _morphFraction;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    _Bool _cornerRadiusEnabled;
    struct CGPoint _stretchAnchorPoint;
}

- (void).cxx_destruct;
- (void)_updateCornerMask;
- (void)applyCornerRadius:(double)arg1;
- (void)cleanup;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool cornerRadiusEnabled; // @synthesize cornerRadiusEnabled=_cornerRadiusEnabled;
@property(readonly, nonatomic) UIView *crossfadeView;
@property(readonly, nonatomic) SBIconImageView *iconImageView;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
- (void)prepareGeometry;
@property(readonly, nonatomic) UIView *scalingView;
- (void)setAppSnapshotCornerRadius:(double)arg1;
- (void)setCrossfadeFraction:(double)arg1;
- (void)setMorphFraction:(double)arg1;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;

@end

