/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _SFPageLoadErrorControllerDelegate <NSObject>
@optional
-(void)pageLoadErrorController:(id)arg1 didChooseOnlyAvailableIdentityForAuthenticationChallenge:(id)arg2;
-(id)pageLoadErrorControllerApplicationDisplayName:(id)arg1;

@required
-(void)pageLoadErrorControllerDidShowAlert:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 setAllowsSpecificHTTPSCertificate:(id)arg2 forHost:(id)arg3;
-(void)pageLoadErrorControllerWillShowPrintingDuringLoadAlert:(id)arg1 action:(int)arg2;
-(void)pageLoadErrorControllerDidShowErrorPage:(id)arg1;
-(BOOL)pageLoadErrorControllerShouldHandleCertificateError:(id)arg1;
-(void)pageLoadErrorController:(id)arg1 loadFailedRequestAfterError:(id)arg2;

@end

