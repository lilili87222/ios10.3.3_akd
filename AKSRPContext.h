//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKMasterToken, NSDictionary;

@interface AKSRPContext : NSObject
{
    struct __AppleIDAuthSupportData *_underlyingContext;
    NSDictionary *_configurationParameters;
}

@property(readonly, nonatomic) NSDictionary *configurationParameters; // @synthesize configurationParameters=_configurationParameters;
@property(readonly, nonatomic) struct __AppleIDAuthSupportData *underlyingContext; // @synthesize underlyingContext=_underlyingContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *status;
@property(readonly, nonatomic) AKMasterToken *masterToken;
@property(readonly, nonatomic) NSDictionary *serverProvidedData;
- (id)configureWithParameters:(id)arg1;
- (void)dealloc;

@end

