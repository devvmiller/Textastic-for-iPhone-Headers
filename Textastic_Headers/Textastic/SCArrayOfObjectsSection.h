/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCArrayOfItemsSection.h"

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCArrayOfObjectsSection : SCArrayOfItemsSection {
	NSMutableDictionary* itemsClassDefinitions;
	NSMutableSet* itemsSet;
	BOOL sortItemsSetAscending;
}
@property(assign, nonatomic) BOOL sortItemsSetAscending;
@property(retain, nonatomic) NSMutableSet* itemsSet;
@property(readonly, assign, nonatomic) NSMutableDictionary* itemsClassDefinitions;
+(id)sectionWithHeaderTitle:(id)headerTitle withItemsSet:(id)itemsSet withClassDefinition:(id)classDefinition;
+(id)sectionWithHeaderTitle:(id)headerTitle withItems:(id)items withClassDefinition:(id)classDefinition;
-(id)firstClassDefinition;
-(void)generateItemsArrayFromItemsSet;
-(id)getClassDefinitionForObject:(id)object;
-(void)tableViewControllerDidDisappear:(id)tableViewController cancelButtonTapped:(BOOL)tapped doneButtonTapped:(BOOL)tapped3;
-(void)tableViewControllerWillDisappear:(id)tableViewController cancelButtonTapped:(BOOL)tapped doneButtonTapped:(BOOL)tapped3;
-(void)commitDetailModelChanges:(id)changes;
-(void)commitEditingStyle:(int)style forCellAtIndexPath:(id)indexPath;
-(void)addNewItem:(id)item;
-(void)buildDetailTableModel:(id)model forItem:(id)item;
-(id)createNewItem;
-(id)detailTextForCellAtIndex:(unsigned)index;
-(id)textForCellAtIndex:(unsigned)index;
-(void)dealloc;
-(id)initWithHeaderTitle:(id)headerTitle withItemsSet:(id)itemsSet withClassDefinition:(id)classDefinition;
-(id)initWithHeaderTitle:(id)headerTitle withItems:(id)items withClassDefinition:(id)classDefinition;
-(id)init;
@end
