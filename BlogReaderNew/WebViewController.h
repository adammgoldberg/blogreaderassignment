//
//  WebViewController.h
//  BlogReaderNew
//
//  Created by Adam Goldberg on 2015-09-27.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController


@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;




@end
