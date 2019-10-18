//
//  WGVisitorTermsViewController.h
//  WGVisitor
//
//  Created by Zaigham Maqsood on 16/10/2019.
//

#import <UIKit/UIKit.h>
#import "WGVisitorCore/WGVisitorConstants+status.h"

NS_ASSUME_NONNULL_BEGIN



@interface WGVisitorTermsViewController : UIViewController


@property (nonatomic, copy) void (^callBack)(WGVisitorStatus status);

@end


NS_ASSUME_NONNULL_END
