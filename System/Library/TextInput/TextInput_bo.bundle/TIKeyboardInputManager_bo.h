/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/TextInput_bo.bundle/TextInput_bo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_bo/TextInput_bo-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_bo : TIKeyboardInputManagerZephyr {

	BOOL _sawHalanta;

}
-(id)replacementForDoubleSpace;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)nonstopPunctuationCharacters;
-(BOOL)doesComposeText;
@end

