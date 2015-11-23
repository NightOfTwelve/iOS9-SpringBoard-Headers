/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNObservable.h>

@protocol CNObservable <NSObject>
@required
-(id)subscribe:(id)arg1;

@end


@class NSString;

@interface CNObservable : NSObject <CNObservable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 ;
+(id)observableWithResults:(id)arg1 interval:(double)arg2 scheduler:(id)arg3 ;
+(id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
+(id)observableWithTimeInterval:(double)arg1 range:(NSRange)arg2 scheduler:(id)arg3 ;
+(id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3 ;
+(id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 scheduler:(id)arg5 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
+(id)observableWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 ;
+(id)emptyObservable;
+(id)forkJoin:(id)arg1 scheduler:(id)arg2 ;
+(id)progressiveForkJoin:(id)arg1 scheduler:(id)arg2 ;
+(id)observableWithRange:(NSRange)arg1 scheduler:(id)arg2 ;
+(id)observableWithResults:(id)arg1 scheduler:(id)arg2 ;
+(id)timerWithDelay:(double)arg1 scheduler:(id)arg2 ;
+(id)concatenate:(id)arg1 ;
+(id)observableWithResult:(id)arg1 ;
+(id)observableWithRange:(NSRange)arg1 ;
+(id)observableWithResults:(id)arg1 ;
+(id)observableWithError:(id)arg1 ;
+(id)neverObservable;
+(id)timerWithDelay:(double)arg1 ;
+(id)combineLatest:(id)arg1 ;
+(id)merge:(id)arg1 ;
+(id)observableWithBlock:(/*^block*/id)arg1 ;
-(id)autocompleteTimeoutAfterDelay:(double)arg1 scheduler:(id)arg2 ;
-(id)activityIndicatingObservableWithActivityDidStartHandler:(/*^block*/id)arg1 activityDidStopHandler:(/*^block*/id)arg2 ;
-(id)localObservableWithScheduler:(id)arg1 ;
-(id)networkObservableWithActivityDidStartHandler:(/*^block*/id)arg1 activityDidStopHandler:(/*^block*/id)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5 ;
-(id)throttle:(double)arg1 onScheduler:(id)arg2 ;
-(id)buffer:(unsigned long long)arg1 ;
-(id)sort:(/*^block*/id)arg1 ;
-(id)toArray;
-(id)subscribe:(id)arg1 ;
-(id)distinct;
-(id)doOnNext:(/*^block*/id)arg1 ;
-(id)doOnError:(/*^block*/id)arg1 ;
-(id)filter:(/*^block*/id)arg1 ;
-(id)doOnSubscribe:(/*^block*/id)arg1 ;
-(id)onError:(id)arg1 ;
-(id)timeoutAfterDelay:(double)arg1 alternateObservable:(id)arg2 schedule:(id)arg3 ;
-(id)doOnTerminate:(/*^block*/id)arg1 ;
-(id)delaySubscription:(double)arg1 scheduler:(id)arg2 ;
-(id)doOnCompletion:(/*^block*/id)arg1 ;
-(id)onErrorHandler:(/*^block*/id)arg1 ;
-(id)startWith:(id)arg1 scheduler:(id)arg2 ;
-(id)allObjects:(id*)arg1 ;
-(id)delay:(double)arg1 scheduler:(id)arg2 ;
-(id)distinctUntilChanged;
-(id)doOnCancel:(/*^block*/id)arg1 ;
-(id)onEmpty:(id)arg1 ;
-(id)skipLast:(unsigned long long)arg1 ;
-(id)startWith:(id)arg1 ;
-(id)take:(unsigned long long)arg1 ;
-(id)takeLast:(unsigned long long)arg1 ;
-(id)skip:(unsigned long long)arg1 ;
-(id)observeOn:(id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)subscribeOn:(id)arg1 ;
@end
