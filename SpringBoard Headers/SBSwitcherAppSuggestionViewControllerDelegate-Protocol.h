//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBBestAppSuggestion, SBSwitcherAppSuggestionViewController;

@protocol SBSwitcherAppSuggestionViewControllerDelegate <NSObject>
- (long long)orientationForSuggestionViewController:(SBSwitcherAppSuggestionViewController *)arg1;
- (void)suggestionViewController:(SBSwitcherAppSuggestionViewController *)arg1 activatedSuggestion:(SBBestAppSuggestion *)arg2;
@end

