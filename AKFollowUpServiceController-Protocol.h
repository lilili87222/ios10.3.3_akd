//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol AKFollowUpServiceController <NSObject>
- (void)fetchFollowUpDefinitionsWithIdmsData:(NSDictionary *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)setAuthenticationDelegate:(id <AKFollowUpAuthHandler>)arg1;
- (id)initWithRequestProvider:(id <AKURLRequestProvider>)arg1;
@end

