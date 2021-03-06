/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class NSString, AWDNFCTSMStartEvent;

@interface NFAWDTSMStart : NSObject <NFAWDEventProtocol> {

	unsigned memoryTransientDeselect;
	unsigned memoryTransientReset;
	unsigned memoryPersistent;
	unsigned memoryIndexTable;
	NSString* url;
	AWDNFCTSMStartEvent* _metric;

}

@property (nonatomic,retain) NSString * url; 
@property (assign,nonatomic) unsigned memoryTransientDeselect; 
@property (assign,nonatomic) unsigned memoryTransientReset; 
@property (assign,nonatomic) unsigned memoryPersistent; 
@property (assign,nonatomic) unsigned memoryIndexTable; 
@property (nonatomic,retain) AWDNFCTSMStartEvent * metric;                  //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setMetric:(AWDNFCTSMStartEvent *)arg1 ;
-(AWDNFCTSMStartEvent *)metric;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(void)setMemoryTransientDeselect:(unsigned)arg1 ;
-(void)setMemoryTransientReset:(unsigned)arg1 ;
-(void)setMemoryPersistent:(unsigned)arg1 ;
-(void)setMemoryIndexTable:(unsigned)arg1 ;
-(unsigned)memoryTransientDeselect;
-(unsigned)memoryTransientReset;
-(unsigned)memoryPersistent;
-(unsigned)memoryIndexTable;
@end

