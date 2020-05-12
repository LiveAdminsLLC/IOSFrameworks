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

#import "ChatHeadManager.h"
#import "CHAvatarView.h"
#import "CHDraggableView+Avatar.h"
#import "CHDraggableView.h"
#import "CHDraggingCoordinator.h"
#import "DConstant.h"
#import "HeaderView.h"
#import "HeaderViewCell.h"
#import "SKBounceAnimation.h"
#import "UIView+DraggableView.h"

FOUNDATION_EXPORT double ChatHeadVersionNumber;
FOUNDATION_EXPORT const unsigned char ChatHeadVersionString[];

