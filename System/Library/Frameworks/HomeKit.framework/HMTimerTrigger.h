/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKit/HMTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSDateComponents, NSCalendar;

@interface HMTimerTrigger : HMTrigger <NSSecureCoding> {

	NSDate* _fireDate;
	NSTimeZone* _timeZone;
	NSDateComponents* _recurrence;
	NSCalendar* _recurrenceCalendar;

}

@property (nonatomic,copy) NSDate * fireDate;                            //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                        //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy) NSDateComponents * recurrence;                //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,copy) NSCalendar * recurrenceCalendar;              //@synthesize recurrenceCalendar=_recurrenceCalendar - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_serializeForAdd;
-(void)_registerNotificationHandlers;
-(void)_handleTriggerFired:(id)arg1 ;
-(void)_updateFireDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateTimeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateRecurrence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleScheduleChangedNotification:(id)arg1 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5 ;
-(void)updateFireDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateTimeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRecurrence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSCalendar *)recurrenceCalendar;
-(void)setRecurrenceCalendar:(NSCalendar *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSDate *)fireDate;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(NSDateComponents *)recurrence;
-(void)setRecurrence:(NSDateComponents *)arg1 ;
@end

