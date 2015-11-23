/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUSGenericResult : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * actionButton; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SAUIImageResource * thumbnail; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * titleMaxLines; 
+(id)genericResult;
+(id)genericResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)centered;
-(SAUIAppPunchOut *)actionButton;
-(NSString *)secondaryTitle;
-(NSString *)footnote;
-(NSNumber *)titleMaxLines;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SAUIImageResource *)thumbnail;
-(void)setThumbnail:(SAUIImageResource *)arg1 ;
-(void)setActionButton:(SAUIAppPunchOut *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setTitleMaxLines:(NSNumber *)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
@end
