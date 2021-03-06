/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITextInputStringTokenizer.h>

@class UIResponder;
@protocol UITextInput;

@interface ABCodeEditorStringTokenizer : UITextInputStringTokenizer {
	UIResponder<UITextInput>* _nonretainedTextInput;
}
-(id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;
-(BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;
-(id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;
-(id)initWithTextInput:(id)textInput;
@end

