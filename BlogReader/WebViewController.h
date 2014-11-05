//
//  WebViewController.h
//  BlogReader
//
//  Created by shivkanth on 22/05/14.
//  Copyright (c) 2014 shivkanth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIWebView *webView;
@property(strong,nonatomic) NSURL *blogPostURL;
@end
