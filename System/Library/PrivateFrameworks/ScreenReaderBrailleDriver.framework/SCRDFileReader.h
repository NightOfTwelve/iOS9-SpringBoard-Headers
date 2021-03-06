/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCRDFileReaderDelegate;
@class NSThread, NSFileHandle;

@interface SCRDFileReader : NSObject {

	id<SCRDFileReaderDelegate> _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;

}
-(BOOL)hasStarted;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)start;
-(void)_readHandler:(id)arg1 ;
-(void)invalidateWithWait:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
@end

