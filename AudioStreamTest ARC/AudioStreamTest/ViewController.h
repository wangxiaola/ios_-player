//
//  ViewController.h
//  AudioStreamTest
//
//  Created by szhx on 13-5-22.
//  Copyright (c) 2013年 szhx. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AudioStreamer;

@interface ViewController : UIViewController
- (IBAction)play:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *urlTextField;

@end
