/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:34 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDevice;
#import <Metal/Metal-Structs.h>
@class MTLIOAccelDevice;

@interface MTLIOAccelResourcePool : NSObject {

	MTLIOAccelResourcePoolPrivate* _priv;
	Class _resourceClass;
	MTLIOAccelDevice*<MTLDevice> _device;
	IOAccelNewResourceArgs* _resourceArgs;
	unsigned _resourceArgsSize;
	unsigned long long age_to_purge;

}

@property (readonly) IOAccelNewResourceArgs* resourceArgs;              //@synthesize resourceArgs=_resourceArgs - In the implementation block
@property (readonly) unsigned resourceArgsSize;                         //@synthesize resourceArgsSize=_resourceArgsSize - In the implementation block
-(id)initWithDevice:(id)arg1 resourceClass:(Class)arg2 resourceArgs:(const IOAccelNewResourceArgs*)arg3 resourceArgsSize:(unsigned)arg4 options:(id)arg5 ;
-(int)availableCount;
-(IOAccelNewResourceArgs*)resourceArgs;
-(unsigned)resourceArgsSize;
-(void)dealloc;
-(void)purge;
@end

