/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "NSCoding.h"


__attribute__((visibility("hidden")))
@interface DBQuota : NSObject <NSCoding> {
	long long normalConsumedBytes;
	long long sharedConsumedBytes;
	long long totalBytes;
}
@property(readonly, assign, nonatomic) long long totalBytes;
@property(readonly, assign, nonatomic) long long totalConsumedBytes;
@property(readonly, assign, nonatomic) long long sharedConsumedBytes;
@property(readonly, assign, nonatomic) long long normalConsumedBytes;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
@end
