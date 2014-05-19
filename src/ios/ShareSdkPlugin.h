//
//  BaiduSharePlugin.m
//  TheTower
//
//  Created by CHC on 14-1-7.
//
//

#import <Cordova/CDVPlugin.h>
#import <Foundation/Foundation.h>

@interface ShareSdkPlugin : CDVPlugin

- (void) send:(CDVInvokedUrlCommand*)command;

@end
