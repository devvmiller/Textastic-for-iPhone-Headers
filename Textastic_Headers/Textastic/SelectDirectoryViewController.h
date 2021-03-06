/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewController.h>

@class NSString, UIActivityIndicatorView, NSMutableArray;
@protocol SelectDirectoryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SelectDirectoryViewController : UITableViewController {
	NSMutableArray* folders;
	NSString* oldDirectoryPath;
	int selectedRow;
	id<SelectDirectoryViewControllerDelegate> selectDirectoryViewControllerDelegate;
	UIActivityIndicatorView* activityIndicator;
}
@property(assign, nonatomic) id<SelectDirectoryViewControllerDelegate> selectDirectoryViewControllerDelegate;
@property(copy, nonatomic) NSString* oldDirectoryPath;
-(void)dealloc;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)dismiss;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)loadFolders;
-(void)addFolder:(id)folder completeFilePath:(id)path indentationLevel:(int)level;
-(void)cancelAction:(id)action;
@end

