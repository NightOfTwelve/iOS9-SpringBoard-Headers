/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_ko.bundle/TextInput_ko
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_ko/TextInput_ko-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_ko : TIKeyboardInputManagerZephyr {

	Hangul2SetAutomata* _batchConverter;
	BOOL _deleteSyllable;

}
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)clearInput;
-(BOOL)shouldExtendPriorWord;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(id)composeJamo:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(void)acceptInput;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)initWithConfig:(id)arg1 ;
-(BOOL)doesComposeText;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
@end

