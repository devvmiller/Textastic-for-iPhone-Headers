/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import "SCTextFieldCell.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SCNumericTextFieldCell : SCTextFieldCell {
	NSNumber* minimumValue;
	NSNumber* maximumValue;
	BOOL allowFloatValue;
	BOOL displayZeroAsBlank;
}
@property(assign, nonatomic) BOOL displayZeroAsBlank;
@property(assign, nonatomic) BOOL allowFloatValue;
@property(copy, nonatomic) NSNumber* maximumValue;
@property(copy, nonatomic) NSNumber* minimumValue;
-(BOOL)getValueIsValid;
-(void)setAttributesTo:(id)to;
-(void)commitChanges;
-(void)loadBoundValueIntoControl;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

