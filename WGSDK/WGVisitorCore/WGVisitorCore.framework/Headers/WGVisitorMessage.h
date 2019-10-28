//
//  Message.h
//  WGVisitorOperatorPanel
//
//  Created by on 12/25/12.
//
//

#import <Foundation/Foundation.h>
typedef enum MessageType: NSInteger{
    kMessageCurrentUser,
    kMessageVisitor,
    kMessageTrainer,
    kMessageQA,
    kMessageSystem
}MessageType;

typedef enum MessageStatus: NSInteger{
    kMessageStatusNotSent,
    kMessageStatusSent,
    kMessageStatusDelivered,
    kMessageStatusRead,
    
}MessageStatus;

@class WGVisitorUser;
@interface WGVisitorMessage : NSObject


@property (nonatomic, assign) int  messageId;

@property (nonatomic, retain) NSString * message;
@property (nonatomic, retain) NSString * managerId;

@property (nonatomic, retain) WGVisitorUser * sender;
@property (strong,nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, assign)MessageType messageType;

@property (nonatomic, assign)MessageStatus messageStatus;

@property (nonatomic, assign)BOOL isGreetingMessage;
//- (NSBubbleType) messageType;
- (BOOL) isMessageByCurrentUser;

-(NSString*) getFormattedTime;

@end
