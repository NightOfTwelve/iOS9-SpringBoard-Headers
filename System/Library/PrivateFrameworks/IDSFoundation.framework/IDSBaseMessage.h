/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSDate, NSString, NSNumber, NSArray, NSMutableArray;

@interface IDSBaseMessage : NSObject <NSCopying> {

	BOOL _forceCellular;
	BOOL _usingOutgoingPush;
	BOOL _wantsResponse;
	BOOL _wantsBinaryPush;
	BOOL _wantsIntegerUniqueIDs;
	BOOL _highPriority;
	BOOL _hasReceivedPushAck;
	int _timeoutRetries;
	id _context;
	NSDictionary* _clientInfo;
	NSData* _serviceData;
	unsigned long long _uniqueID;
	NSDictionary* _userInfo;
	NSDate* _creationDate;
	NSString* _topic;
	double _timeout;
	/*^block*/id _completionBlock;
	/*^block*/id _deliveryAcknowledgementBlock;
	NSDictionary* _cachedBody;
	NSString* _dsAuthID;
	double _timeSent;
	NSString* _dataUsageBundleIdentifier;
	NSDictionary* _responseAlert;
	NSNumber* _retryCount;

}

@property (readonly) BOOL wantsIDSServer; 
@property (readonly) BOOL isValidMessage; 
@property (readonly) BOOL payloadCanBeLogged; 
@property (assign) unsigned long long uniqueID;                                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain,readonly) NSString * uniqueIDString; 
@property (retain,readonly) NSString * dataUsageBundleIdentifier;                                 //@synthesize dataUsageBundleIdentifier=_dataUsageBundleIdentifier - In the implementation block
@property (assign) double timeout;                                                                //@synthesize timeout=_timeout - In the implementation block
@property (assign) double timeSent;                                                               //@synthesize timeSent=_timeSent - In the implementation block
@property (copy) id completionBlock;                                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (copy) id deliveryAcknowledgementBlock;                                                 //@synthesize deliveryAcknowledgementBlock=_deliveryAcknowledgementBlock - In the implementation block
@property (retain,readonly) NSString * bagKey; 
@property (retain) NSString * topic;                                                              //@synthesize topic=_topic - In the implementation block
@property (readonly) long long command; 
@property (readonly) long long responseCommand; 
@property (assign) BOOL hasReceivedPushAck;                                                       //@synthesize hasReceivedPushAck=_hasReceivedPushAck - In the implementation block
@property (assign) BOOL forceCellular;                                                            //@synthesize forceCellular=_forceCellular - In the implementation block
@property (assign) BOOL highPriority;                                                             //@synthesize highPriority=_highPriority - In the implementation block
@property (readonly) BOOL wantsSignature; 
@property (readonly) BOOL wantsBodySignature; 
@property (readonly) BOOL wantsCFNetworkTimeout; 
@property (readonly) BOOL wantsManagedRetries; 
@property (readonly) BOOL wantsExtraTimeoutRetry; 
@property (readonly) int maxTimeoutRetries; 
@property (readonly) BOOL wantsHTTPHeaders; 
@property (readonly) BOOL wantsCompressedBody; 
@property (assign) BOOL wantsBinaryPush;                                                          //@synthesize wantsBinaryPush=_wantsBinaryPush - In the implementation block
@property (assign) BOOL wantsIntegerUniqueIDs;                                                    //@synthesize wantsIntegerUniqueIDs=_wantsIntegerUniqueIDs - In the implementation block
@property (readonly) BOOL wantsJSONBody; 
@property (readonly) BOOL wantsBagKey; 
@property (readonly) BOOL wantsUserAgentInHeaders; 
@property (readonly) BOOL wantsHTTPGet; 
@property (readonly) BOOL wantsAPSRetries; 
@property (readonly) BOOL wantsAnisetteHeaders; 
@property (readonly) double anisetteHeadersTimeout; 
@property (assign) BOOL wantsResponse;                                                            //@synthesize wantsResponse=_wantsResponse - In the implementation block
@property (assign) int timeoutRetries;                                                            //@synthesize timeoutRetries=_timeoutRetries - In the implementation block
@property (readonly) BOOL ignoresNetworkConnectivity; 
@property (readonly) BOOL wantsCustomRetryInterval; 
@property (readonly) double customRetryInterval; 
@property (retain,readonly) NSArray * requiredKeys; 
@property (copy) NSDictionary * responseAlertInfo;                                                //@synthesize responseAlert=_responseAlert - In the implementation block
@property (retain,readonly) NSDictionary * messageBody; 
@property (retain,readonly) NSDictionary * messageBodyUsingCache; 
@property (retain,readonly) NSDictionary * additionalMessageHeaders; 
@property (retain,readonly) NSDictionary * additionalQueryStringParameters; 
@property (retain,readonly) NSDictionary * additionalInternalHeaders; 
@property (retain,readonly) NSDictionary * additionalMessageHeadersForOutgoingPush; 
@property (retain,readonly) NSDictionary * nonStandardMessageHeadersForOutgoingPush; 
@property (assign,nonatomic) SecKeyRef pushPrivateKey; 
@property (assign,nonatomic) SecKeyRef pushPublicKey; 
@property (nonatomic,copy) NSData * pushCertificate; 
@property (nonatomic,copy) NSData * pushToken; 
@property (nonatomic,copy) NSMutableArray * certDataArray; 
@property (nonatomic,copy) NSMutableArray * publicKeyArray; 
@property (nonatomic,copy) NSMutableArray * privateKeyArray; 
@property (nonatomic,copy) NSMutableArray * userIDArray; 
@property (nonatomic,readonly) SecKeyRef identityPrivateKey; 
@property (nonatomic,readonly) SecKeyRef identityPublicKey; 
@property (nonatomic,copy,readonly) NSData * IDCertificate; 
@property (setter=setDSAuthID:,nonatomic,copy) NSString * dsAuthID;                               //@synthesize dsAuthID=_dsAuthID - In the implementation block
@property (copy) NSData * serviceData;                                                            //@synthesize serviceData=_serviceData - In the implementation block
@property (copy) NSDictionary * clientInfo;                                                       //@synthesize clientInfo=_clientInfo - In the implementation block
@property (retain,readonly) NSString * userAgentHeaderString; 
@property (nonatomic,copy) NSNumber * retryCount;                                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (copy) NSDictionary * userInfo;                                                         //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSDate * creationDate;                                                         //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) id context;                                                                    //@synthesize context=_context - In the implementation block
@property (setter=_setUsingOutgoingPush:) BOOL _usingOutgoingPush;                                //@synthesize usingOutgoingPush=_usingOutgoingPush - In the implementation block
@property (setter=_setCachedBody:,retain) NSDictionary * _cachedBody;                             //@synthesize cachedBody=_cachedBody - In the implementation block
-(long long)command;
-(void)setServiceData:(NSData *)arg1 ;
-(NSData *)serviceData;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(double)timeout;
-(void)setClientInfo:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(id)context;
-(void)setContext:(id)arg1 ;
-(unsigned long long)uniqueID;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)_clearCache;
-(NSString *)bagKey;
-(void)setTimeout:(double)arg1 ;
-(NSNumber *)retryCount;
-(void)setRetryCount:(NSNumber *)arg1 ;
-(NSDictionary *)clientInfo;
-(void)setWantsResponse:(BOOL)arg1 ;
-(void)setWantsIntegerUniqueIDs:(BOOL)arg1 ;
-(void)setWantsBinaryPush:(BOOL)arg1 ;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(NSString *)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
-(BOOL)wantsResponse;
-(void)setDeliveryAcknowledgementBlock:(id)arg1 ;
-(void)_setCachedBody:(id)arg1 ;
-(void)setResponseAlertInfo:(NSDictionary *)arg1 ;
-(NSString *)dsAuthID;
-(void)setDSAuthID:(id)arg1 ;
-(BOOL)forceCellular;
-(void)setForceCellular:(BOOL)arg1 ;
-(int)timeoutRetries;
-(void)setTimeoutRetries:(int)arg1 ;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsIntegerUniqueIDs;
-(void)setTimeSent:(double)arg1 ;
-(id)deliveryAcknowledgementBlock;
-(NSDictionary *)responseAlertInfo;
-(void)_cacheBody;
-(NSDictionary *)messageBodyUsingCache;
-(NSString *)uniqueIDString;
-(BOOL)wantsIDSServer;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsJSONBody;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsBagKey;
-(BOOL)wantsCFNetworkTimeout;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(BOOL)wantsManagedRetries;
-(BOOL)wantsAnisetteHeaders;
-(double)anisetteHeadersTimeout;
-(BOOL)wantsSignature;
-(BOOL)wantsBodySignature;
-(BOOL)wantsCustomRetryInterval;
-(double)customRetryInterval;
-(NSString *)dataUsageBundleIdentifier;
-(BOOL)payloadCanBeLogged;
-(BOOL)isValidMessage;
-(SecKeyRef)pushPrivateKey;
-(void)setPushPrivateKey:(SecKeyRef)arg1 ;
-(SecKeyRef)pushPublicKey;
-(void)setPushPublicKey:(SecKeyRef)arg1 ;
-(NSData *)pushCertificate;
-(void)setPushCertificate:(NSData *)arg1 ;
-(NSMutableArray *)certDataArray;
-(void)setCertDataArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)publicKeyArray;
-(void)setPublicKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)privateKeyArray;
-(void)setPrivateKeyArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)userIDArray;
-(void)setUserIDArray:(NSMutableArray *)arg1 ;
-(SecKeyRef)identityPrivateKey;
-(SecKeyRef)identityPublicKey;
-(NSData *)IDCertificate;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(long long)responseCommand;
-(NSDictionary *)additionalMessageHeaders;
-(NSDictionary *)additionalQueryStringParameters;
-(NSDictionary *)additionalMessageHeadersForOutgoingPush;
-(NSDictionary *)nonStandardMessageHeadersForOutgoingPush;
-(NSDictionary *)additionalInternalHeaders;
-(void)handleResponseHeaders:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(BOOL)_usingOutgoingPush;
-(void)_setUsingOutgoingPush:(BOOL)arg1 ;
-(NSDictionary *)_cachedBody;
-(BOOL)hasReceivedPushAck;
-(void)setHasReceivedPushAck:(BOOL)arg1 ;
-(BOOL)ignoresNetworkConnectivity;
-(double)timeSent;
-(BOOL)highPriority;
-(void)setUniqueID:(unsigned long long)arg1 ;
-(NSArray *)requiredKeys;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(NSDictionary *)messageBody;
@end
