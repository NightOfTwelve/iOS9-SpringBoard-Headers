//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class _UIBackdropView;

@interface SBNotificationCenterNavigationBarBackgroundView : UIView
{
    long long _layoutMode;
    _UIBackdropView *_backdropView;
    UIView *_backgroundView;
}

- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)updateBackgroundImage;
- (void)setAppearanceStorage:(id)arg1;
- (id)appearanceStorage;
- (void)setBarWantsAdaptiveBackdrop:(_Bool)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1 forLayoutMode:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
