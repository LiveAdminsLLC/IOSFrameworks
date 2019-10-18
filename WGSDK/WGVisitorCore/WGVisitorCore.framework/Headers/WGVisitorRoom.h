//
//  Room.h
//  WGVisitorOperatorPanel
//
//  Created by on 12/25/12.
//
//

#import <Foundation/Foundation.h>
#import "WGVisitorConstants.h"


#pragma -mark Notifications

#define _kVisitorNotificationType @"_kVisitorNotificationType"

#define _kChatCategory @"_kChatCategory"

#define _kChatReply @"_kChatReply"

#define _kChatView @"_kChatView"


#define _kCallCategory @"_kCallCategory"

#define _kCallAccept @"_kCallAccept"

#define _kCallDecline @"_kCallDecline"

#define _kCallView @"_kCallView"

typedef enum : NSUInteger {
    VisitorLocalNotificationType_None=399,
    
    VisitorLocalNotificationType_NewMessage,
    VisitorLocalNotificationType_Calling,
    VisitorLocalNotificationType_Wait_Warning,
    
} VisitorLocalNotificationType;


@class XMPPRoom;
@class WGVisitorSite;
@class WGVisitorUser;
@class WGVisitorMessage;

@interface WGVisitorRoom : NSObject


@property (nonatomic, retain) NSString *roomId;
@property (nonatomic, assign) XMPPRoom * xmppRoom;
@property (nonatomic, retain) NSMutableDictionary * roomOcuupants;
@property (nonatomic, retain) NSMutableArray * messages;
@property (nonatomic, assign) WGVisitorSite * site;
@property (nonatomic, assign) BOOL isRoomDestroyed;
@property (nonatomic, retain)NSString *isRoomExist;
@property (nonatomic, retain) NSString *operatorId;
@property (nonatomic, retain) NSString *operatorName;
@property (nonatomic, assign) BOOL isRoomNeedUpate;

@property (nonatomic, assign) BOOL isRoomJoined;

@property (nonatomic, assign)BOOL isDelayed;

@property (nonatomic, assign) BOOL isRoomJoininng;

@property (nonatomic, retain) NSString *greetingMessage;

@property (nonatomic, retain) NSString *httpMessageId;

//Room unread messages
@property (nonatomic, assign) NSInteger unreadMessagesCount;

@property (nonatomic, retain)NSMutableArray *roomUpdatesCallback;
@property (nonatomic, assign)BOOL isRoomEnabled;

-(void) addOperatorGreetingMessage;

- (NSInteger) totalMessagesDelivered;
- (void) setTotalMessagesDelivered;
//-----------
- (void) addRoomDelegate:(id) delegate;
- (void) removeRoomDelegate:(id) delegate;

- (void)inviteUser:(id)jid withMessage:(NSString *)invitationMessage;
- (BOOL) sendMessage:(NSString*) message;
- (void) connect;
- (BOOL) isConnected;
- (void) closeRoom;
- (void)destroyRoom;
-(NSString*)getReasonPacket;
-(WGVisitorMessage*) lastMessage;
-(NSDictionary *)lastChatMessageData;
-(WGVisitorUser*)getVisitor;

-(void) clearAllMessages;
- (void) closeRoomSession;

-(BOOL) isHttpRoom;

-(void) joinHTTPRoom;
-(void) leaveHTTPRoom;


//- (void) closeStream;;

- (void)sendActiveChatState;
- (void)sendComposingChatState;
- (void)sendPausedChatState;
- (void)sendInactiveChatState;
- (void)sendGoneChatState;

-(void) addOperatorGreetingMessage;


- (void)addRoomUpdatesCallBack:(RoomUpdates)callBack;

- (void)removeRoomUpdateCallback:(RoomUpdates)callBack;

- (void)removeRoomUpdateCallbacks;

-(void) removeRoomDelegates;

- (void)sendRoomUpdatesWithStatus:(RoomStatus)status withObject:(id) obj;

-(void) updateMessageStatus:(NSDictionary*) message;

-(void) readMessages;

@end
