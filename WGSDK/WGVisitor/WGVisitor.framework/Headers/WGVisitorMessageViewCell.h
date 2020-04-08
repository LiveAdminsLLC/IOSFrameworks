//
//  WGMessageViewCell.h
//  WGOperator
//
//  Created by Pro on 04/05/2016.
//  Copyright © 2016 Maavratech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

#import "UIWGCustomTextView.h"
#import <WGVisitorCore/WGVisitorMessage.h>

@interface WGVisitorMessageViewCell : UITableViewCell

{

}

@property (nonatomic, weak)IBOutlet UIView *containerView;

@property (nonatomic, weak)IBOutlet UIImageView *messageStatusView;

//@property (nonatomic, retain)IBOutlet UILabel *lbMessage;
@property (nonatomic, retain)IBOutlet UILabel *lbUser;
//@property (nonatomic, retain)IBOutlet UITextView *lbUser;
@property (weak, nonatomic) IBOutlet UILabel *lbTime;

@property (weak, nonatomic) IBOutlet UIWGCustomTextView *lbMessage;

@property (weak, nonatomic) IBOutlet UIImageView* avatarImageView;

@property (weak, nonatomic) IBOutlet  WKWebView  *webMessage;

//@property (weak, nonatomic) IBOutlet UITextView *lbUser;
@property (weak, nonatomic) IBOutlet UIView *parentView;

-(void)reloadData:(WGVisitorMessage*)message;
@end
