//
//  ChatDetailViewController.h
//  WGOperator
//
//  Created by 
//  Copyright (c) 2013 . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WGVisitorSharedData.h"
#import "WGMessageViewController.h"

@import WGVisitorCore;

@class WGVisitorRoom;
@interface WGVisitorChatDetailViewController : WGMessageViewController

{

    
    WGVisitorSharedData *sharedData;

}


//@property (nonatomic, retain)WGMessageViewController *messageViewController;



@property (nonatomic, assign)NSInteger navHeight;
@property (nonatomic, assign)BOOL viaChatHead;

@property (nonatomic, assign)   BOOL automaticCloseBlock;
@property (nonatomic, copy)void(^callback)(WGVisitorStatus status);

@property (nonatomic, copy)void(^visitorRoomCallback)(RoomStatus status);

- (void)disableSendBtn;
-(void) resignMessageInputView;

//-(void) sessionClosed;
@property (nonatomic, weak) WGVisitorRoom * currentRoom;

-(void) startChat:(NSString*) message;
-(void) sendMessage:(NSString*) text;

-(void) closeRoomAction;

- (void)hideReloadChatButton;
@end
