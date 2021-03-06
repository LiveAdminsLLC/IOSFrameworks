#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSDate+WGVisitor.h"
#import "NSString+WGVisitorWebService.h"
#import "UIColor+WGVisitor.h"
#import "XMPPMessage+WGVisitor.h"
#import "XMPPRoom+WGVisitor.h"
#import "WGVisitorMessage.h"
#import "WGVisitorRoom.h"
#import "WGVisitorSite.h"
#import "WGVisitorUser.h"
#import "MulticastDelegate.h"
#import "WGVisitorRoomsManager.h"
#import "WGVisitorSignalRManager.h"
#import "WGVisitorSitesManager.h"
#import "WGVisitorWebService.h"
#import "WGVisitorXMPPClient.h"
#import "WGVisitorConstants+Status.h"
#import "WGVisitorConstants.h"
#import "WGVisitorHeaders.h"
#import "WGVisitorNotifications.h"

FOUNDATION_EXPORT double WGVisitorCoreVersionNumber;
FOUNDATION_EXPORT const unsigned char WGVisitorCoreVersionString[];

