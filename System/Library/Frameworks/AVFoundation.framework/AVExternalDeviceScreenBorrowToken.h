/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject {

	AVExternalDevice* _externalDevice;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)reason;
-(void)finalize;
-(NSString *)client;
@end

