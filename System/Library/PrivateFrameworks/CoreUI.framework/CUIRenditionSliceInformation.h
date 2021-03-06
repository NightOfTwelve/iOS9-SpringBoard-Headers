/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {

	long long _renditionType;
	double _boundaries[4];
	CGRect _destinationRect;
	psdGradientColor _edgeInsets;

}

@property (nonatomic,readonly) long long renditionType;                  //@synthesize renditionType=_renditionType - In the implementation block
@property (nonatomic,readonly) CGRect destinationRect;                   //@synthesize destinationRect=_destinationRect - In the implementation block
@property (nonatomic,readonly) psdGradientColor edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(psdGradientColor)edgeInsets;
-(CGRect)destinationRect;
-(double)positionOfSliceBoundary:(unsigned long long)arg1 ;
-(id)initWithSliceInformation:(id)arg1 destinationRect:(CGRect)arg2 ;
-(long long)renditionType;
-(CGSize)_topLeftCapSize;
-(CGSize)_bottomRightCapSize;
-(id)initWithRenditionType:(long long)arg1 destinationRect:(CGRect)arg2 topLeftInset:(CGSize)arg3 bottomRightInset:(CGSize)arg4 ;
@end

