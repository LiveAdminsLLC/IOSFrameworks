//
//  WGMessageViewController.h
//  WGOperator
//
//  Created by Pro on 04/05/2016.
//  Copyright © 2016 Maavratech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WGMessageControllerConstants.h"

#import <WGVisitorCore/WGVisitorRoom.h>

extern const NSString *_kMessageCellBody;
extern const NSString *_kMessageCellUserName;
extern const NSString *_kMessageCellTime;


@protocol WGVisitorMessageViewProtocol <NSObject>

@required

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;
- (WGMessageType)messageTypeForRowAtIndexPath:(NSIndexPath *)indexPath;

- (UIColor *)colorForRowAtIndexPath:(NSIndexPath *)indexPath;

- (void)didSendText:(NSString *)text;
@optional

- (void)timestampForRowAtIndexPath:(NSString *)message;




@end

@interface WGVisitorMessageViewController : UIViewController<UITextViewDelegate, UISearchBarDelegate,UITableViewDelegate, UITableViewDataSource,UIViewControllerRestoration>

{

}

//+ (WGMessageViewController *)getMessageViewController;
+ (WGVisitorMessageViewController *)getMessageViewController:(BOOL) isInGrid;

@property (nonatomic, weak)id<WGVisitorMessageViewProtocol>delegate;

@property (nonatomic,weak)IBOutlet UIStackView *verticalStackView;
@property (nonatomic,weak)IBOutlet UIStackView *horizontalStackView;


-(UIView *)messageInputView;

@property (nonatomic, weak)IBOutlet UITextView *textView;
@property (nonatomic, weak)IBOutlet UITableView *tableView;
@property (nonatomic, weak)IBOutlet UILabel *lbMessageType;
@property (nonatomic, retain)IBOutlet NSString *selectedString;
@property (nonatomic,weak)IBOutlet UISearchBar *searchBar;

@property (nonatomic, weak)IBOutlet NSLayoutConstraint *statusbarHeightConstraint;

@property (nonatomic, weak)IBOutlet NSLayoutConstraint *searchHeightConstraint;
@property (nonatomic, weak)IBOutlet NSLayoutConstraint *lockUnockConstraint;
@property (nonatomic, weak) WGVisitorRoom * currentRoom;
@property (weak, nonatomic) IBOutlet UIView *searchBarBackgroundView;

@property (weak, nonatomic) IBOutlet UIView *containerView;

@property (nonatomic, assign)BOOL isInGrid;

@property (nonatomic, weak)IBOutlet UIButton *sendButton;
@property (nonatomic, weak)IBOutlet UIButton *btnCannedMessage;
@property (nonatomic, weak)IBOutlet UIButton *btnLock;
@property (weak, nonatomic) IBOutlet UIButton *uploadFileBtn;


@property (nonatomic, weak)IBOutlet UIImageView *headerLogoImage;
@property (nonatomic, weak)IBOutlet UILabel *headerTitleLabel;
@property (nonatomic, weak)IBOutlet UILabel *headerDetailLabel;
@property (nonatomic, weak)IBOutlet UIButton *closeChatButton;

@property (nonatomic, weak)IBOutlet UIView * headerView;

@property (nonatomic, weak)IBOutlet UIButton *backButton;

-(IBAction)closeChatAction:(id)sender;

-(IBAction)backAction:(id)sender;


- (void)scrollToBottomAnimated:(BOOL)animated;
- (void)addMessageViewController:(UIView *)parentView;


@property (weak) IBOutlet UIButton *searchNextButton;
@property (weak) IBOutlet UIButton *searchPreButton;
@property (nonatomic, retain)NSArray *searchedArray;
@property (nonatomic, assign)NSInteger currentShowedIndex;
@property (nonatomic, retain)NSString *selectedText;

-(void) scrollToMessage:(WGVisitorMessage*) message;

-(void)hideShowSearchNextPreButton:(BOOL)showHide;

@property (nonatomic, copy) void(^doneButtonCallback)();

-(void)updateUnreadMessagesCount;

-(void) hideLockButton:(BOOL) flag;

-(void)updateUnreadMessagesCount:(int) count;

-(void) setupChatUI;
@end
