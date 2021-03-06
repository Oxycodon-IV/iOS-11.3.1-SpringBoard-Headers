//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconStateUnarchiveContext.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBIconModel, SBRootFolder;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext>
{
    SBIconModel *_iconSource;
    SBRootFolder *_rootFolder;
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    _Bool _corrupted;
    _Bool _dirty;
    NSDictionary *_metadata;
}

- (void).cxx_destruct;
- (id)_currentFolder;
- (long long)_currentParseDepth;
@property(retain, nonatomic, setter=_setIconSource:) SBIconModel *_iconSource; // @synthesize _iconSource;
- (_Bool)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
- (void)_noteEnteredNode;
- (void)_noteExitedNode;
- (void)_noteNodeIdentifierWasUnarchived:(id)arg1;
- (void)_noteRepresentationIsCorrupted;
- (void)_noteSignificantDeviation;
- (id)_popFolder;
- (void)_pushFolder:(id)arg1;
@property(retain, nonatomic, setter=_setMetadata:) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic, setter=_setRootFolder:) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

