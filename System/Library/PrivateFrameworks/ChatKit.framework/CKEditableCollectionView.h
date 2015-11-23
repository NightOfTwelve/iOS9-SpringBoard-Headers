/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView {

	BOOL _editing;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end
