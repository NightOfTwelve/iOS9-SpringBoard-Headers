/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKStateMachine;

@interface GKState : NSObject {

	GKStateMachine* _stateMachine;

}

@property (nonatomic,__weak,readonly) GKStateMachine * stateMachine; 
+(id)state;
-(void)updateWithDeltaTime:(double)arg1 ;
-(BOOL)isValidNextState:(Class)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(void)willExitWithNextState:(id)arg1 ;
-(void)_setStateMachine:(id)arg1 ;
-(id)init;
-(GKStateMachine *)stateMachine;
@end
