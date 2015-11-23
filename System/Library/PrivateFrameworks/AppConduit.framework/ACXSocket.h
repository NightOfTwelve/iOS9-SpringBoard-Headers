/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class IDSDeviceConnection, NSObject;

@interface ACXSocket : NSObject {

	BOOL _readSourceIsRunning;
	BOOL _invalidated;
	int _socketFD;
	/*^block*/id _eventHandler;
	IDSDeviceConnection* _deviceConnection;
	NSObject*<OS_dispatch_queue> _socketQueue;
	NSObject*<OS_dispatch_source> _socketReadSource;

}

@property (readonly) int socketFD;                                                //@synthesize socketFD=_socketFD - In the implementation block
@property (readonly) id eventHandler;                                             //@synthesize eventHandler=_eventHandler - In the implementation block
@property (readonly) IDSDeviceConnection * deviceConnection;                      //@synthesize deviceConnection=_deviceConnection - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> socketQueue;                    //@synthesize socketQueue=_socketQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_source> socketReadSource;              //@synthesize socketReadSource=_socketReadSource - In the implementation block
@property (assign) BOOL readSourceIsRunning;                                      //@synthesize readSourceIsRunning=_readSourceIsRunning - In the implementation block
@property (assign) BOOL invalidated;                                              //@synthesize invalidated=_invalidated - In the implementation block
-(id)readDataWithError:(id*)arg1 ;
-(id)eventHandler;
-(void)invalidate;
-(void)resumeReadSource;
-(BOOL)writePingWithError:(id*)arg1 ;
-(void)suspendReadSource;
-(BOOL)writeBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeShutdownMessageWithError:(id*)arg1 ;
-(id)initWithIDSDeviceConnection:(id)arg1 readEventHandler:(/*^block*/id)arg2 ;
-(void)_setUpSocketReadSource;
-(BOOL)readSourceIsRunning;
-(void)setReadSourceIsRunning:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)socketReadSource;
-(int)socketFD;
-(NSObject*<OS_dispatch_queue>)socketQueue;
-(id)readDataOrDictionaryWithError:(id*)arg1 ;
-(IDSDeviceConnection *)deviceConnection;
-(id)initWithSocket:(int)arg1 readEventHandler:(/*^block*/id)arg2 ;
-(id)readDictionaryWithError:(id*)arg1 ;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
@end
