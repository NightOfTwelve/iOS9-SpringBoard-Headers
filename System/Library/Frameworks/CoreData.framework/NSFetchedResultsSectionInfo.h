/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NSFetchedResultsSectionInfo
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * indexTitle; 
@property (nonatomic,readonly) unsigned long long numberOfObjects; 
@property (nonatomic,readonly) NSArray * objects; 
@required
-(NSString *)indexTitle;
-(NSArray *)objects;
-(NSString *)name;
-(unsigned long long)numberOfObjects;

@end

