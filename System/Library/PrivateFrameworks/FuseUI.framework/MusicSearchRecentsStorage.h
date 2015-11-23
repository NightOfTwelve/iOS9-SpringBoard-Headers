/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSURL, NSMutableArray;

@interface MusicSearchRecentsStorage : UIViewController {

	long long _limit;
	NSURL* _persistenceURL;
	NSMutableArray* _recents;
	BOOL _hasChanges;
	long long _maximumNumberOfRecents;

}

@property (readonly) long long maximumNumberOfRecents;              //@synthesize maximumNumberOfRecents=_maximumNumberOfRecents - In the implementation block
+(id)sharedRecentsStorage;
-(id)recentSearches;
-(void)save;
-(void)load;
-(void)clear;
-(id)initWithLimit:(long long)arg1 persistenceURL:(id)arg2 ;
-(void)_addRecent:(id)arg1 replacingRecent:(id)arg2 ;
-(void)addRecent:(id)arg1 ;
-(void)replaceRecent:(id)arg1 withRecent:(id)arg2 ;
-(long long)maximumNumberOfRecents;
@end
