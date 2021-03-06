/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMPanoramaCaptureRequestDelegate <NSObject>
@optional
-(void)panoramaRequestDidStartCapturing:(id)arg1;
-(void)panoramaRequest:(id)arg1 didGeneratePaintingStatus:(id)arg2;
-(void)panoramaRequestDidStopCapturing:(id)arg1;
-(void)panoramaRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)panoramaRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

