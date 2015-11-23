/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class MKMapSnapshotter;

@interface ICAttachmentMapModel : ICAttachmentModel {

	MKMapSnapshotter* _mapSnapshotter;

}

@property (retain) MKMapSnapshotter * mapSnapshotter;              //@synthesize mapSnapshotter=_mapSnapshotter - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(BOOL)needToGeneratePreviews;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(BOOL)generateAsynchronousPreviews;
-(void)generatePreviews;
-(void)setMapSnapshotter:(MKMapSnapshotter *)arg1 ;
-(MKMapSnapshotter *)mapSnapshotter;
@end
