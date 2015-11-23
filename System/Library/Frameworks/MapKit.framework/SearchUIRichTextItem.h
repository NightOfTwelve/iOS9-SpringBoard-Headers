/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SearchUIRichTextItem <NSObject>
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSArray * formattedTextItems; 
@property (nonatomic,copy,readonly) NSString * formattedTextDelimiter; 
@property (nonatomic,readonly) unsigned long long textMaxLines; 
@property (nonatomic,readonly) double starRating; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,copy,readonly) NSString * contentAdvisory; 
@optional
-(NSArray *)formattedTextItems;
-(unsigned long long)textMaxLines;
-(NSString *)formattedTextDelimiter;
-(double)starRating;
-(NSString *)contentAdvisory;
-(NSString *)text;
-(NSArray *)icons;

@end
