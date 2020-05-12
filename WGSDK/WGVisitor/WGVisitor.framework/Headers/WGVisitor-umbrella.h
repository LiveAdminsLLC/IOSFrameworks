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

#import "CRToastManager+toast.h"
#import "UIWGCustomButton.h"
#import "UIWGCustomLabel.h"
#import "UIWGCustomTextView.h"
#import "WGVisitorMessageViewCell.h"
#import "WGMessageControllerConstants.h"
#import "WGVisitorMessageViewController.h"
#import "WGVisitorChatDetailViewController.h"
#import "WGVisitorChatDraggingCoordinator.h"
#import "WGVisitorContactViewController.h"
#import "WGVisitorSharedData.h"
#import "WGVisitorSoundPlayer.h"
#import "WGVisitorTermsViewController.h"
#import "WGVisitorViewController.h"

FOUNDATION_EXPORT double WGVisitorVersionNumber;
FOUNDATION_EXPORT const unsigned char WGVisitorVersionString[];

