//
//  MYCAccountViewController.h
//  Mycelium Wallet
//
//  Created by Oleg Andreev on 15.10.2014.
//  Copyright (c) 2014 Mycelium. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MYCWalletAccount;
@interface MYCAccountViewController : UIViewController

@property(nonatomic) MYCWalletAccount* account;
@property(nonatomic) BOOL canArchive;

@end
