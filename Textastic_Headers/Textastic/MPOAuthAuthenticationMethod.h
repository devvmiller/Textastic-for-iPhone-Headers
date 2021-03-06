/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSURL, NSTimer, MPOAuthAPI;

__attribute__((visibility("hidden")))
@interface MPOAuthAuthenticationMethod : NSObject {
	MPOAuthAPI* oauthAPI_;
	NSURL* oauthGetAccessTokenURL_;
	NSTimer* refreshTimer_;
}
@property(retain, nonatomic) NSTimer* refreshTimer;
@property(retain, nonatomic) NSURL* oauthGetAccessTokenURL;
@property(assign, nonatomic) MPOAuthAPI* oauthAPI;
+(Class)_authorizationMethodClassForURL:(id)url withConfiguration:(id*)configuration;
-(void)_automaticallyRefreshAccessToken:(id)token;
-(void)refreshAccessToken;
-(void)setTokenRefreshInterval:(double)interval;
-(void)authenticate;
-(oneway void)dealloc;
-(id)initWithAPI:(id)api forURL:(id)url withConfiguration:(id)configuration;
-(id)initWithAPI:(id)api forURL:(id)url;
@end

