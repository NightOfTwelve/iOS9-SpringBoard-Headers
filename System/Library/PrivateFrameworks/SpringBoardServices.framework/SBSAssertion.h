/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardServices/SpringBoardServices-Structs.h>
@class NSString;

@interface SBSAssertion : NSObject {

	NSString* _assertionName;
	NSString* _reason;
	unsigned _port;
	opaque_pthread_mutex_t _lock;

}

@property (nonatomic,copy,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSString *)reason;
-(NSString *)assertionName;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
@end
