/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositing.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSDictionary, NSObject, CIContext, NSString;

@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing> {

	NSObject*<OS_dispatch_group> _filteringRequestsInFlight;
	BOOL _shouldCancelAllRequests;
	CGColorSpaceRef _dstColorSpace;
	NSObject*<OS_dispatch_queue> _defaultCIContextThreadSafety;
	CIContext* _defaultCIContext;

}

@property (assign) BOOL shouldCancelAllRequests;                                                          //@synthesize shouldCancelAllRequests=_shouldCancelAllRequests - In the implementation block
@property (readonly) NSObject*<OS_dispatch_group> filteringRequestsInFlight;                              //@synthesize filteringRequestsInFlight=_filteringRequestsInFlight - In the implementation block
@property (nonatomic,retain) CGColorSpaceRef dstColorSpace;                                               //@synthesize dstColorSpace=_dstColorSpace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) NSDictionary * requiredPixelBufferAttributesForRenderContext; 
+(void)initialize;
-(NSDictionary *)sourcePixelBufferAttributes;
-(void)renderContextChanged:(id)arg1 ;
-(void)startVideoCompositionRequest:(id)arg1 ;
-(void)cancelAllPendingVideoCompositionRequests;
-(NSDictionary *)requiredPixelBufferAttributesForRenderContext;
-(void)_willDeallocOrFinalize;
-(CGColorSpaceRef)dstColorSpace;
-(void)setDstColorSpace:(CGColorSpaceRef)arg1 ;
-(BOOL)shouldCancelAllRequests;
-(id)defaultCIContext;
-(NSObject*<OS_dispatch_group>)filteringRequestsInFlight;
-(void)setShouldCancelAllRequests:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

