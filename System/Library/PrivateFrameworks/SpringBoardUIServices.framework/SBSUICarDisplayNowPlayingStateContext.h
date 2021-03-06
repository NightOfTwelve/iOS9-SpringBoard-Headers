/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBSUICarDisplayNowPlayingStateContext : NSObject <NSSecureCoding> {

	NSString* _stateName;
	NSString* _animationName;
	NSString* _associatedBundleID;

}

@property (nonatomic,copy) NSString * stateName;                       //@synthesize stateName=_stateName - In the implementation block
@property (nonatomic,copy) NSString * animationName;                   //@synthesize animationName=_animationName - In the implementation block
@property (nonatomic,copy) NSString * associatedBundleID;              //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithState:(id)arg1 animationName:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithState:(id)arg1 animationName:(id)arg2 ;
-(void)setStateName:(NSString *)arg1 ;
-(void)setAnimationName:(NSString *)arg1 ;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(NSString *)stateName;
-(NSString *)associatedBundleID;
-(NSString *)animationName;
@end

