//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBPolygon : NSObject
{
    NSMutableArray *_mutablePoints;
    NSMutableArray *_weights;
    struct CGPoint _centroid;
    struct CGPoint _weightedCentroid;
}

+ (struct CGPoint)_pointAtIndex:(unsigned long long)arg1 ofPointArray:(id)arg2;
+ (id)_sortPoints:(id)arg1;
- (void).cxx_destruct;
- (void)_applyTransform:(struct CGAffineTransform)arg1;
- (double)_baseOrientation;
@property(nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint centroid; // @synthesize centroid=_centroid;
- (void)_flipHorizontally;
- (_Bool)_isLeftHanded;
- (double)_meanFingertipRowAngle;
- (double)_meanRadius;
- (struct CGPoint)_pointAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
- (void)_rotate:(double)arg1;
- (void)_scale:(double)arg1;
@property(nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=_weightedCentroid;
@property(retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights; // @synthesize weights=_weights;
- (unsigned long long)_thumbIndex;
- (void)_translate:(struct CGPoint)arg1;
- (void)_updateCentroid;
- (void)_updateProperties;
- (void)_updateWeightedCentroid;
- (void)_updateWeights;
- (double)_weightAtIndex:(unsigned long long)arg1;
- (id)description;
@property(readonly, nonatomic) double distanceOfFarthestPointFromCentroid;
- (void)enumeratePointsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithPoints:(id)arg1;
- (id)initWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long pointCount;
- (id)points;

@end

