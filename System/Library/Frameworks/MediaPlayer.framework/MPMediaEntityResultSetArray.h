/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaArray.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPMediaLibraryResultSet, OS_dispatch_queue;
@class MPWeakRef, MPMediaQuerySectionInfo, NSMutableArray, NSObject, MPMediaQueryCriteria;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {

	id<MPMediaLibraryResultSet> _resultSet;
	Class _entityClass;
	MPWeakRef* _libraryWeakRef;
	MPMediaQuerySectionInfo* _sectionInfo;
	NSMutableArray* _entities;
	NSObject*<OS_dispatch_queue> _entitiesQueue;
	MPMediaQueryCriteria* _queryCriteria;
	long long _revision;

}

@property (nonatomic,readonly) id<MPMediaLibraryResultSet> resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
-(id)sectionInfo;
-(id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4 ;
-(BOOL)isQueryResultSetInvalidated;
-(id<MPMediaLibraryResultSet>)resultSet;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
