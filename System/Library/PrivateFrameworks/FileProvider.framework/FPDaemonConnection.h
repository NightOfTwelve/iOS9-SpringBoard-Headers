/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FPDaemon, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface FPDaemonConnection : NSObject {

	NSXPCConnection*<FPDaemon> _connectionQueueConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (nonatomic,retain) NSXPCConnection*<FPDaemon> connectionQueueConnection;              //@synthesize connectionQueueConnection=_connectionQueueConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection*<FPDaemon> connection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                      //@synthesize connectionQueue=_connectionQueue - In the implementation block
+(id)sharedConnection;
-(id)init;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection*<FPDaemon>)connection;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)wakeUpCompletion:(/*^block*/id)arg1 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providePlaceholderForItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)stopProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setConnectionQueueConnection:(NSXPCConnection*<FPDaemon>)arg1 ;
-(NSXPCConnection*<FPDaemon>)connectionQueueConnection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
@end

