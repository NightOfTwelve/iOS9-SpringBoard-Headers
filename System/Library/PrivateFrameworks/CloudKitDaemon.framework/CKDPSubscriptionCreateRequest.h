/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying> {

	CKDPSubscription* _subscription;

}

@property (nonatomic,readonly) BOOL hasSubscription; 
@property (nonatomic,retain) CKDPSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSubscription:(CKDPSubscription *)arg1 ;
-(CKDPSubscription *)subscription;
-(BOOL)hasSubscription;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(BOOL)readFrom:(id)arg1 ;
@end
