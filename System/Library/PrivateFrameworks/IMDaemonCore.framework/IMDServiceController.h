/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject {

	NSMutableDictionary* _services;

}

@property (nonatomic,readonly) NSArray * allServices; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
-(void)registerSessionClassWithBundle:(id)arg1 ;
@end

