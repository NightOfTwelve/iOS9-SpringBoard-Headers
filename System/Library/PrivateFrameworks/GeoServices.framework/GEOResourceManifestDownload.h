/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {

	GEODownloadMetadata* _metadata;
	GEOResources* _resources;

}

@property (nonatomic,readonly) BOOL hasResources; 
@property (nonatomic,retain) GEOResources * resources;                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)initWithResourceManifestData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(BOOL)hasResources;
-(GEOResources *)resources;
-(void)setResources:(GEOResources *)arg1 ;
-(GEODownloadMetadata *)metadata;
-(BOOL)readFrom:(id)arg1 ;
@end
