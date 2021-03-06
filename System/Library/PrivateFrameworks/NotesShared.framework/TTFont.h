/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface TTFont : NSObject {

	UIFont* _nativeFont;
	unsigned _fontHints;
	NSString* _fontName;
	double _pointSize;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double pointSize;                 //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) unsigned fontHints;               //@synthesize fontHints=_fontHints - In the implementation block
+(UIFont*)convertFont:(UIFont*)arg1 toBold:(BOOL)arg2 toItalic:(BOOL)arg3 ;
+(void)font:(UIFont*)arg1 isBold:(BOOL*)arg2 isItalic:(BOOL*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)pointSize;
-(NSString *)fontName;
-(id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned)arg3 ;
-(unsigned)fontHints;
-(UIFont*)nativeFontForStyle:(unsigned)arg1 ;
@end

