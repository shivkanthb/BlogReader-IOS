//
//  BlogPost.h
//  BlogReader
//
//  Created by shivkanth on 17/05/14.
//  Copyright (c) 2014 shivkanth. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property(nonatomic,strong) NSString *title;
@property(nonatomic,strong) NSString *author;
@property(nonatomic,strong) NSString *thumbnail;
@property(nonatomic,strong) NSString *date;
@property(nonatomic,strong) NSString *url;
-(id)initWithTitle : (NSString *)title;
+(id) blogPostWithTitle : (NSString *)title;
-(NSURL *) thumbnailURL;
-(NSString *) formattedDate;
@end
