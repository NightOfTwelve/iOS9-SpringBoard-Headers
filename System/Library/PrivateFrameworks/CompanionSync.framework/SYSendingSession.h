/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableIndexSet;

@interface SYSendingSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	NSObject*<OS_dispatch_source> _messageTimer;
	unsigned long long _batchIndex;
	NSMutableIndexSet* _ackedBatchIndices;
	unsigned long long _activity;
	int _flagsLock;
	struct {
		unsigned state : 4;
		unsigned canRestart : 1;
		unsigned canRollback : 1;
		unsigned isResetSync : 1;
		unsigned started : 1;
		unsigned cancelled : 1;
		unsigned completed : 1;
		unsigned remoteStartSent : 1;
		unsigned remoteStartConfirmed : 1;
		unsigned remoteEndSent : 1;
		unsigned remoteEndConfirmed : 1;
		unsigned localErrorOccurred : 1;
	}  _flags;

}
-(void)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_fetchNextBatch;
-(void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2 ;
-(id)_newMessageHeader;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_sendSyncCompleteAndRunBlock:(/*^block*/id)arg1 ;
-(void)_sendSyncCancelled;
-(void)_sendSyncRestart;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_hasSentEnd;
-(id)initWithService:(id)arg1 isReset:(BOOL)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tweakMessageHeader:(id)arg1 ;
-(void)_setLocalErrorOccurred;
-(BOOL)_localErrorOccurred;
-(void)_sentEnd;
-(void)_setComplete;
-(void)_sendEndSessionAndError:(id)arg1 ;
-(void)_notifyErrorAndShutdown;
-(void)_sessionFinished;
-(void)_sentStart;
-(void)_setCancelled;
-(void)_confirmedStart;
-(void)_confirmedEnd;
-(void)_setMessageTimer;
-(BOOL)_hasValidSessionID:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_resolvedIdentifierForRequest:(id)arg1 ;
-(void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)_handleError:(id)arg1 ;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(BOOL)wasCancelled;
@end

