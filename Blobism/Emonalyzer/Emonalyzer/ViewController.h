//
//  ViewController.h
//  Emonalyzer
//
//  Created by George Still on 11/16/17.
//  Copyright © 2017 George Still. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Affdex/Affdex.h>

#define SENDHOST @"127.0.0.1"
#define SENDPORT 12001

@interface ViewController : NSViewController <AFDXDetectorDelegate>

@property (strong) AFDXDetector *detector;
@property (strong) IBOutlet NSImageView *imageView;
@property (strong) IBOutlet NSTextField *textField;

@end
