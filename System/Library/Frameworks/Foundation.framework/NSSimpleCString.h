/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSSimpleCString : NSString {

	char* bytes;
	int numBytes;
	int _unused;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned long long)cStringLength;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPrefix:(id)arg1 ;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(id)stringByAppendingString:(id)arg1 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(void)finalize;
@end

