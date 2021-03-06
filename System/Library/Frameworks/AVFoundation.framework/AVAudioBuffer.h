/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioFormat;

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioFormat * format; 
@property (nonatomic,readonly) const AudioBufferList* audioBufferList; 
@property (nonatomic,readonly) AudioBufferList* mutableAudioBufferList; 
-(AudioBufferList*)mutableAudioBufferList;
-(unsigned)byteCapacity;
-(void)setByteLength:(unsigned)arg1 ;
-(id)initWithFormat:(id)arg1 byteCapacity:(unsigned)arg2 ;
-(AVAudioFormat *)format;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)byteLength;
-(const AudioBufferList*)audioBufferList;
@end

