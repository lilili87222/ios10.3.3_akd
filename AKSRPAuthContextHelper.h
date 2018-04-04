//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, AKAppleIDAuthenticationContext, AKClient, NSString;

@interface AKSRPAuthContextHelper : NSObject
{
    NSString *_continuationToken;
    NSString *_passwordResetToken;
    NSString *_passwordResetBackupToken;
    _Bool _ignoreInternalTokens;
    NSString *_username;
    NSString *_password;
    NSString *_altDSID;
    NSString *_DSID;
    AKClient *_client;
    ACAccount *_authKitAccount;
    AKAppleIDAuthenticationContext *_authContext;
}

@property(retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // @synthesize authContext=_authContext;
@property(nonatomic) _Bool ignoreInternalTokens; // @synthesize ignoreInternalTokens=_ignoreInternalTokens;
@property(retain, nonatomic) ACAccount *authKitAccount; // @synthesize authKitAccount=_authKitAccount;
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)_passwordResetBackupToken;
- (id)_passwordResetToken;
- (id)_continuationToken;
- (id)_appleIDClientIdentifier;
- (void)clearContinuationTokenIfSupported;
- (id)authenticationParameters;

@end

