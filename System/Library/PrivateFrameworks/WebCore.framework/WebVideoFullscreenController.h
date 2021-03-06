/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<WebVideoFullscreenControllerContext>* _context;
	RefPtr<WebCore::HTMLVideoElement>* _videoElement;

}
-(void)exitFullscreen;
-(id)init;
-(void)didFinishFullscreen:(WebVideoFullscreenControllerContext*)arg1 ;
-(void)requestHideAndExitFullscreen;
-(HTMLVideoElement*)videoElement;
-(void)setVideoElement:(HTMLVideoElement*)arg1 ;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
@end

