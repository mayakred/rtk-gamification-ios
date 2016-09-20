//
// Created by Anton Zlotnikov on 11.02.16.
// Copyright (c) 2016 MAYAK RED. All rights reserved.
//

#import <Foundation/Foundation.h>

#define API_AUTH_REQUEST                 @"auth/request"
#define API_AUTH_CONFIRM                 @"auth/confirm"
#define API_AUTH_LOGOUT                  @"logout"


@interface MKRNetworkConfigManager : NSObject

+ (void)setUpConfigs;

+ (void)setAuthHeaderWithToken:(NSString *)authToken;

+ (void)clearAuthHeaderToken;

+ (NSIndexSet *)defaultDescriptorsStatusCodes;

@end