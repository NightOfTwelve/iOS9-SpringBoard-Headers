/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface GKRouter : NSObject {

	NSMutableArray* _routes;
	NSMutableArray* _handlers;

}
-(BOOL)dispatch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scheme:(id)arg1 from:(id)arg2 to:(/*^block*/id)arg3 ;
-(void)from:(id)arg1 to:(/*^block*/id)arg2 ;
@end
