/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSObject.h>

@class ABSyntaxDefinitionCollection, NSString, ABSyntaxNode;

@interface ABSyntaxProxy : NSObject {
	ABSyntaxNode* _proxiedObject;
	BOOL _includeBase;
	ABSyntaxNode* _rootSyntaxNode;
	ABSyntaxDefinitionCollection* _syntaxDefinitionCollection;
	NSString* _includeString;
}
@property(copy, nonatomic) NSString* includeString;
@property(readonly, assign, nonatomic) ABSyntaxDefinitionCollection* syntaxDefinitionCollection;
@property(readonly, assign, nonatomic) ABSyntaxNode* rootSyntaxNode;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
-(void)setAverageMatchDistance:(XXStruct_DaUm_C)distance;
-(XXStruct_DaUm_C)averageMatchDistance;
-(id)description;
-(void)setEndRegEx:(id)ex;
-(id)patterns;
-(id)endCaptures;
-(id)beginCaptures;
-(id)captures;
-(id)end;
-(id)contentName;
-(id)name;
-(id)endRegEx;
-(id)begin;
-(id)match;
-(void)dealloc;
-(id)initWithIncludeString:(id)includeString rootSyntaxNode:(id)node syntaxDefinitionCollection:(id)collection;
@end

