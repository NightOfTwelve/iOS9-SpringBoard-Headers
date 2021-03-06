/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCSnippetDataSourceObserver.h>
#import <libobjc.A.dylib/_NCSnippetDataSource.h>
#import <libobjc.A.dylib/NCDataSource.h>

@protocol _NCSnippetDataSourceManager;
@class _NCConcreteDataSource, NSString, BBSectionInfo;

@interface NCSnippetDataSource : NSObject <NCSnippetDataSourceObserver, _NCSnippetDataSource, NCDataSource> {

	_NCConcreteDataSource* _concreteDataSource;
	NSString* _dataSourceIdentifier;
	NSString* _parentDataSourceIdentifier;
	long long _snippetDataSourceCategory;
	id<_NCSnippetDataSourceManager> _snippetDataSourceManager;
	BBSectionInfo* _representedSectionInfo;

}

@property (nonatomic,readonly) long long snippetDataSourceCategory;                                 //@synthesize snippetDataSourceCategory=_snippetDataSourceCategory - In the implementation block
@property (nonatomic,retain) BBSectionInfo * representedSectionInfo;                                //@synthesize representedSectionInfo=_representedSectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<_NCSnippetDataSourceManager> snippetDataSourceManager;              //@synthesize snippetDataSourceManager=_snippetDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSString * dataSourceIdentifier;                                     //@synthesize dataSourceIdentifier=_dataSourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * parentDataSourceIdentifier;                               //@synthesize parentDataSourceIdentifier=_parentDataSourceIdentifier - In the implementation block
-(id)initWithCategory:(long long)arg1 identifier:(id)arg2 parentDataSourceIdentifier:(id)arg3 ;
-(void)setSnippetDataSourceManager:(id<_NCSnippetDataSourceManager>)arg1 ;
-(void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)snippetDataSource:(id)arg1 removeDatum:(id)arg2 ;
-(void)setRepresentedSectionInfo:(BBSectionInfo *)arg1 ;
-(NSString *)parentDataSourceIdentifier;
-(long long)snippetDataSourceCategory;
-(id<_NCSnippetDataSourceManager>)snippetDataSourceManager;
-(void)addSnippetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeSnippetObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BBSectionInfo *)representedSectionInfo;
-(NSString *)dataSourceIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
@end

