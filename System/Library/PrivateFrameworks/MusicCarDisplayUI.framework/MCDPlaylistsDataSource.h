/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDQueryDataSource.h>

@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface MCDPlaylistsDataSource : MCDQueryDataSource {

	BOOL _hasParentPlaylist;
	NSCache* _cachedDurations;
	NSCache* _cachedCounts;
	NSCache* _cachedRepresentativeItems;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)resetCaches;
-(BOOL)showsIndexBar;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(void)_invalidateCalculatedEntities;
-(BOOL)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(double)cachedDurationForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)isFolderForEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedCountForEntityAtIndex:(unsigned long long)arg1 ;
-(id)cachedRepresentativeItemForEntityAtIndex:(unsigned long long)arg1 ;
-(id)_representativePlaylistForEntityAtIndex:(unsigned long long)arg1 ;
-(void)_breadthFirstVisitNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitor:(/*^block*/id)arg2 ;
-(void)_bfsNonFolderPlaylistsWithRootPlaylist:(id)arg1 visitedPlaylistPIDs:(id)arg2 stop:(BOOL*)arg3 visitor:(/*^block*/id)arg4 ;
-(double)durationForEntityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countForEntityAtIndex:(unsigned long long)arg1 ;
-(id)representativeItemForEntityAtIndex:(unsigned long long)arg1 ;
@end

