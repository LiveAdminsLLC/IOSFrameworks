//
//  SignalRBaseManager.h
//  AFNetworking
//
//  Created by Zaigham Maqsood on 14/12/2018.
//

#import <Foundation/Foundation.h>
#import "WGVisitorConstants.h"




//@import SignalRSwift;

//#import "SignalR.h"

#define _kEvent  @"event"
#define _kData  @"data"
#define _kCallback  @"callback"

@interface SignalRBaseManager : NSObject
{
    
}

//@property (copy)SignalRResponse messageResponse;

//@property (copy)RTCCallbacks rtcCallback;



+ (SignalRBaseManager *)sharedInstance;

- (void)startConnectingSocket;

- (void)connectSignalR;
- (void)disconnect;

- (BOOL)getConnectionStatus;

-(void) reconnect;

- (void)sendReloggedEvent:(NSString *)chatId userName:(NSString *)userName userId:(NSString *)userId;

//-(void) unsubscribeRTC;

- (void)addListeners;


-(void) unsubscribeUser;
- (void)sendRegisterUserEvent;

- (NSMutableDictionary *)trimNullObjects:(id)list;

-(void) invokeMessageEvent:(NSArray *) data;

- (void)sendEvent:(NSString *)eventName data:(NSArray *)data reponseCallback:(void (^)(NSError *error, id responseObject))responseCallback;

- (void)sendEventOffline:(NSString *)eventName data:(NSArray *)data reponseCallback:(void (^)(NSError *error, id responseObject))responseCallback;

-(void)sendGetVideoIdByChatIdEvent:(NSString *)params reponseCallback:(void (^)(NSError *error, id responseObject))responseCallback;

-(void) GetChatMessageIdWithStatus:(NSString*)chatId reponseCallback:(void (^)(NSError *error, id responseObject))responseCallback;

@end
