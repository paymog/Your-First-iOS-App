//
//  ViewController.h
//  Your First iOS App
//
//  Created by Paymahn Moghadasian on 2013-07-28.
//  Copyright (c) 2013 Paymahn Moghadasian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>
- (IBAction)changeGreeting:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

@property (copy, nonatomic) NSString *userName;
@end
