/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject {

	BOOL _isAutoincrement;
	BOOL _isPrimaryKey;
	BOOL _isNullable;
	NSString* _name;
	NSString* _type;
	NSString* _defaultValue;
	NSString* _foreignKeyTargetTable;
	NSString* _foreignKeyTargetColumn;
	long long _deletionAction;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isAutoincrement;                         //@synthesize isAutoincrement=_isAutoincrement - In the implementation block
@property (assign,nonatomic) BOOL isPrimaryKey;                            //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (assign,nonatomic) BOOL isNullable;                              //@synthesize isNullable=_isNullable - In the implementation block
@property (assign,nonatomic) NSString * defaultValue;                      //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetTable;               //@synthesize foreignKeyTargetTable=_foreignKeyTargetTable - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetColumn;              //@synthesize foreignKeyTargetColumn=_foreignKeyTargetColumn - In the implementation block
@property (assign,nonatomic) long long deletionAction;                     //@synthesize deletionAction=_deletionAction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(BOOL)isNullable;
-(void)setIsNullable:(BOOL)arg1 ;
-(void)setIsPrimaryKey:(BOOL)arg1 ;
-(void)setForeignKeyTargetTable:(NSString *)arg1 ;
-(void)setForeignKeyTargetColumn:(NSString *)arg1 ;
-(void)setDeletionAction:(long long)arg1 ;
-(BOOL)isAutoincrement;
-(void)setIsAutoincrement:(BOOL)arg1 ;
-(BOOL)isPrimaryKey;
-(NSString *)foreignKeyTargetTable;
-(NSString *)foreignKeyTargetColumn;
-(long long)deletionAction;
@end

