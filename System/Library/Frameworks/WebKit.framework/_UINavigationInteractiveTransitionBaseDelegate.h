/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UINavigationInteractiveTransitionBaseDelegate <NSObject>
@required
-(id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
-(void)startInteractiveTransition:(id)arg1;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
-(BOOL)shouldBeginInteractiveTransition:(id)arg1;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;

@end

