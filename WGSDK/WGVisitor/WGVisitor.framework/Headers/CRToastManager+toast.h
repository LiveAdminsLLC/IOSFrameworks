//
//  CRToastManager+toast.h
//  WGOperator
//
//  Created by Pro on 26/08/2016.
//  Copyright © 2016 Maavratech. All rights reserved.
//

@import CRToast;

@interface CRToastManager (toast)

-(void)initilizeToast;

+ (instancetype)manager;


-(void) successToast:(NSString *) successMessage;
-(void) warningToast:(NSString *) warningMessage;
-(void) errorToast:(NSString *) warningMessage;

@end
