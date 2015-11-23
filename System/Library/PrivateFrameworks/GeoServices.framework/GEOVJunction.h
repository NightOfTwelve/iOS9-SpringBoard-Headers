/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVJunction : PBCodable <NSCopying> {

	NSMutableArray* _connectingRoads;
	NSMutableArray* _laneConnections;

}

@property (nonatomic,retain) NSMutableArray * connectingRoads;              //@synthesize connectingRoads=_connectingRoads - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneConnections;              //@synthesize laneConnections=_laneConnections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)laneConnections;
-(unsigned long long)laneConnectionsCount;
-(unsigned long long)connectingRoadsCount;
-(void)setLaneConnections:(NSMutableArray *)arg1 ;
-(void)clearLaneConnections;
-(void)clearConnectingRoads;
-(void)setConnectingRoads:(NSMutableArray *)arg1 ;
-(NSMutableArray *)connectingRoads;
-(id)laneConnectionsAtIndex:(unsigned long long)arg1 ;
-(void)addLaneConnections:(id)arg1 ;
-(void)addConnectingRoad:(id)arg1 ;
-(id)connectingRoadAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
