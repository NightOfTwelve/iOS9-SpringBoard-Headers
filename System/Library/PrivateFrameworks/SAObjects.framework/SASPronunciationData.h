/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSLocale, NSArray;

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * apgId; 
@property (nonatomic,copy) NSLocale * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (assign,nonatomic) long long tokenOffset; 
@property (nonatomic,copy) NSArray * ttsPronunciations; 
@property (nonatomic,copy) NSString * ttsVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationData;
+(id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)orthography;
-(NSLocale *)language;
-(void)setLanguage:(NSLocale *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)apgId;
-(void)setApgId:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(long long)tokenOffset;
-(void)setTokenOffset:(long long)arg1 ;
-(NSArray *)ttsPronunciations;
-(void)setTtsPronunciations:(NSArray *)arg1 ;
-(NSString *)ttsVersion;
-(void)setTtsVersion:(NSString *)arg1 ;
@end
