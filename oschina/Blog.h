//
//  Blog.h
//  oschina
//
//  Created by wangjun on 12-4-25.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Blog : NSObject

@property int _id;
@property (retain,nonatomic) NSString * title;
@property (retain,nonatomic) NSString * where;
@property (retain,nonatomic) NSString * body;
@property (retain,nonatomic) NSString * author;
@property int authorid;
@property int documentType;
@property (retain,nonatomic) NSString * pubDate;
@property BOOL favorite;
@property (retain,nonatomic) NSString * url;
@property int commentCount;

- (id)initWithParameters:(int)nid andTitle:(NSString *)ntitle andWhere:(NSString *)nwhere andBody:(NSString *)nbody andAuthor:(NSString *)nauthor andAuthorid:(int)nauthorid andDocumentType:(int)nDocumentType andPubDate:(NSString *)nPubDate andFavorite:(BOOL)nfavorite andUrl:(NSString *)nurl andCommentCount:(int)ncommentCount;

@end
