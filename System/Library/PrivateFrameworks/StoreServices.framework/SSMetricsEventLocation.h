/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface SSMetricsEventLocation : NSObject {

	long long _position;
	NSString* _type;
	NSMutableDictionary* _values;

}

@property (assign,nonatomic) long long locationPosition;                        //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * locationType;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * reportingDictionary; 
-(NSString *)locationType;
-(void)setLocationPosition:(long long)arg1 ;
-(void)setLocationType:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forLocationKey:(id)arg2 ;
-(NSDictionary *)reportingDictionary;
-(id)valueForLocationKey:(id)arg1 ;
-(long long)locationPosition;
@end

