/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIGestureRecognizer, NSMutableSet, NSSet;

@interface MFComposeScrollView : UIScrollView {

	UIGestureRecognizer* _singleTapGestureRecognizer;
	NSMutableSet* _disabledSubviews;
	CGPoint _tapLocation;
	long long _scrollBlocked;
	BOOL _shouldScrollToFirstResponder;
	BOOL _subviewsDisabled;

}

@property (assign,nonatomic) BOOL subviewsDisabled;                          //@synthesize subviewsDisabled=_subviewsDisabled - In the implementation block
@property (nonatomic,readonly) NSSet * disabledSubviews;                     //@synthesize disabledSubviews=_disabledSubviews - In the implementation block
@property (assign,nonatomic) BOOL shouldScrollToFirstResponder;              //@synthesize shouldScrollToFirstResponder=_shouldScrollToFirstResponder - In the implementation block
-(void)beginBlockingScroll;
-(void)endBlockingScroll;
-(void)setShouldScrollToFirstResponder:(BOOL)arg1 ;
-(NSSet *)disabledSubviews;
-(void)setSubviewsDisabled:(BOOL)arg1 ;
-(void)disableSubview:(id)arg1 ;
-(void)enableSubview:(id)arg1 ;
-(BOOL)shouldScrollToFirstResponder;
-(BOOL)subviewsDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
@end

