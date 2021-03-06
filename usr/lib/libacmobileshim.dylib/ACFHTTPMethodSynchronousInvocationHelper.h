/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACFHTTPMethodInvocationDelegate.h>

@protocol ACFHTTPMethodInvocationAuthenticationHandler;
@class NSError, NSData, NSString;

@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate> {

	id<ACFHTTPMethodInvocationAuthenticationHandler> _authenticationHandler;
	NSError* _error;
	NSData* _result;

}

@property (assign) id<ACFHTTPMethodInvocationAuthenticationHandler> authenticationHandler;              //@synthesize authenticationHandler=_authenticationHandler - In the implementation block
@property (retain) NSError * error;                                                                     //@synthesize error=_error - In the implementation block
@property (retain) NSData * result;                                                                     //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(void)dealloc;
-(NSData *)result;
-(void)finalize;
-(void)setError:(NSError *)arg1 ;
-(void)setResult:(NSData *)arg1 ;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
-(id)httpMethodInvocation:(id)arg1 credentialForProtectionSpace:(id)arg2 ;
-(void)setAuthenticationHandler:(id<ACFHTTPMethodInvocationAuthenticationHandler>)arg1 ;
-(id<ACFHTTPMethodInvocationAuthenticationHandler>)authenticationHandler;
@end

