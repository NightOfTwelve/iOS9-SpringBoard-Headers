//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface SBNotificationVibrantButton : UIButton
{
    UIButton *_vibrantButton;
    UIButton *_overlayButton;
}

- (id)_buttonImageForColor:(id)arg1 selected:(_Bool)arg2;
- (id)_buttonFont;
- (void)_buttonStateChanged:(id)arg1;
- (void)_buttonPushed:(id)arg1;
- (id)_newButtonWithBackgroundImage:(id)arg1 selectedImage:(id)arg2 titleColor:(id)arg3 selectedTitleColor:(id)arg4;
- (void)layoutSubviews;
- (void)_configureButton:(id *)arg1 withSettings:(id)arg2;
- (void)_configureOverlayViewWithSettings:(id)arg1;
- (void)_configureVibrantViewWithSettings:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateForContenteCategorySizeChange;
- (void)dealloc;
- (id)initWithColorSettings:(id)arg1;

@end
