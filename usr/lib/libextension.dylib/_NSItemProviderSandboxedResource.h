/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libextension.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/libextension.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSData;

@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessingSecurityScopedResource;
	NSURL* _resourceURL;
	NSData* _sandboxExtensionToken;

}

@property (nonatomic,copy) NSURL * resourceURL;                                                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSData * sandboxExtensionToken;                                                               //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (assign,getter=isAccessingSecurityScopedResource,nonatomic) BOOL accessingSecurityScopedResource;              //@synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)resourceURL;
-(NSData *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResourceURL:(NSURL *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAccessingSecurityScopedResource;
-(void)setAccessingSecurityScopedResource:(BOOL)arg1 ;
-(id)resolveURLAndReturnError:(id*)arg1 ;
@end
