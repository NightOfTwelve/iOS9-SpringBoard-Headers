/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty

@property (nonatomic,retain) NSString * feature; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,retain) NSString * region; 
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSString *)info;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(NSString *)feature;
-(void)setFeature:(NSString *)arg1 ;
@end

