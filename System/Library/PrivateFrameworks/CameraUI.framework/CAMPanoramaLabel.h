/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIBackdropViewObserver.h>

@class _UIBackdropView, _UILegibilityView, _UILegibilitySettingsProvider, NSString;

@interface CAMPanoramaLabel : UIView <_UIBackdropViewObserver> {

	_UIBackdropView* _backdropView;
	_UILegibilityView* _legibilityView;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)_updateLegibilityView;
@end
