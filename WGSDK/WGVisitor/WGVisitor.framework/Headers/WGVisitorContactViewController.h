//
//  WGVisitorContactViewController.h
//  AFNetworking
//
//  Created by Zaigham Maqsood on 25/10/2019.
//

#import <UIKit/UIKit.h>
#import "WGVisitorCore/WGVisitorConstants+status.h"

NS_ASSUME_NONNULL_BEGIN

@interface WGVisitorContactViewController : UIViewController



- (id)initWithBlock:(void (^)(WGVisitorStatus status))sucess;


@property(nonatomic,weak) IBOutlet UILabel* headerLabel;

@property(nonatomic,weak) IBOutlet UITextField* phoneTextField;

@property(nonatomic,weak) IBOutlet UITextField* nameTextField;

@property(nonatomic,weak) IBOutlet UITextField* emailTextField;

@property(nonatomic,weak) IBOutlet UITextView* commentsTextView;

@property(nonatomic,weak) IBOutlet UIButton* sendButton;



@end

NS_ASSUME_NONNULL_END
