//
//  SharedData.h
//  WGOperator
//
//  Created by Pro on 5/26/14.fd
//  Copyright (c) 2014 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@interface WGVisitorSharedData : NSObject

+ (WGVisitorSharedData *)getSharedInstance;

@property (nonatomic, assign)BOOL isLoggedIn;

- (UIViewController *)getCurrentDetailViewControler;
- (UIViewController *)getCurrentMasterViewControler;
- (UIInterfaceOrientation)getDeviceOrientation;

@property (nonatomic, retain)UIActivityIndicatorView * spinner;

- (void)showActivityIndicator:(UIView *)view;
- (void)hideActivityIndicator;




@property (nonatomic, retain)NSString *selectedLanguage;

@property (nonatomic, retain)NSBundle *resourcesBundle;


@property(nonatomic,assign) Boolean shouldShowChatHead;

@property(nonatomic,assign) Boolean shouldShowTimeStamp;


@property(nonatomic,strong) NSDictionary * chatConfigurations;

@property(nonatomic,strong) NSDictionary * themeConfigurations;

-(NSString*) websiteDomainName;
-(NSString*) privacyPolicyLink;
-(NSString*) applicationName;
-(Boolean) isRTL;

-(UIColor *) agentTextColor;
-(UIColor *) agentBackgroundColor;

-(UIColor *) visitorTextColor;
-(UIColor *) visitorBackgroundColor;

-(UIColor *) chatHeadColour;
-(UIColor *) themeColor;

-(UIImage *) visitorAvatar;
-(UIImage *) agentAvatar;
-(UIImage *) navigationLogoImage;

-(NSMutableArray *)allRooms;
-(void) showChatHeadIfNeeded;

@end
