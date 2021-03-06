/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _logMessages;

}

@property (nonatomic,retain) NSMutableArray * logMessages;              //@synthesize logMessages=_logMessages - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)setLogMessages:(NSMutableArray *)arg1 ;
-(id)logMessageAtIndex:(unsigned long long)arg1 ;
-(void)clearLogMessages;
-(void)addLogMessage:(id)arg1 ;
-(unsigned long long)logMessagesCount;
-(NSMutableArray *)logMessages;
-(BOOL)readFrom:(id)arg1 ;
@end

