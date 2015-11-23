/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class NSString;

@interface SLAbsintheSigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;

}
-(id)_urlEncodedString:(id)arg1 ;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(BOOL)establish;
-(id)signatureForData:(id)arg1 ;
-(void)dealloc;
@end
