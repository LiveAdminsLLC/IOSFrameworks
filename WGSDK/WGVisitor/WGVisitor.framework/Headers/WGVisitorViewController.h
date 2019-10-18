//
//  WGVisitorViewController.h
//  WGOperator
//
//  Created by  on 09/05/2014.
//  Copyright (c) 2014 . All rights reserved.
//


#import <UIKit/UIKit.h>
#import "WGVisitorChatDetailViewController.h"

@import WGVisitorCore;


@interface WGVisitorViewController : WGVisitorChatDetailViewController



- (void)addTargetSessionClosedForButton:(UIButton*)control  closed:( void(^)(WGVisitorStatus sessionStatus))sucess;


- (void)addTargetSessionClosedForBarButton:(UIBarButtonItem*)control  closed:( void(^)(WGVisitorStatus sessionStatus))sucess;

@property(assign) WGVisitorBarButtonType barButtonType;



+(void)setPreferredLanguage:(NSString*)languageCode;// "ar" for arabic


+(void)shouldShowChatHead:(Boolean)flag;
+(void)shouldShowTimeStamp:(Boolean)flag;

+(void) setChatConfigurations:(NSDictionary *) conf;
+(void) setThemeConfigurations:(NSDictionary *) conf;

+(void)setVisitorName:(NSString*)visitorName phoneNumber:(NSString*)phoneNumber email:(NSString*) email;






@end
