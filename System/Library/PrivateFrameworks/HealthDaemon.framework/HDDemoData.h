/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface HDDemoData : NSObject {

	NSString* _baselineDemoDataPath;
	NSString* _demoDataPath;
	NSFileManager* _fileManager;

}
+(id)demoDataDirectory;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_baselineDataDemoAvailable;
-(BOOL)_createAndPopulateDemoDataDirectoryIfNeeded;
-(id)_directoryPath;
@end

