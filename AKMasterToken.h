//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AKToken.h"

@class NSData, NSMutableDictionary, NSString;

@interface AKMasterToken : AKToken
{
    NSMutableDictionary *_properties;
}

+ (id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2;
+ (id)tokenWithExternalizedVersionString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *externalizedVersionString;
@property(readonly, nonatomic) NSData *externalizedVersion;
- (void)_setEncryptedSessionKey:(id)arg1;
@property(readonly, nonatomic) NSData *encryptedSessionKey;
- (void)_setSessionKey:(id)arg1;
@property(readonly, nonatomic) NSData *sessionKey;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;
- (id)init;
- (_Bool)updateWithHTTPURLResponse:(id)arg1;

@end

