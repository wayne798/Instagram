//
//  NSString+QueryString.h
//  Instagram
//
//  Created by Stuart Hall on 26/11/11.
//  Copyright (c) 2011 Bytesize. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (QueryString)

- (NSMutableDictionary *)dictionaryFromQueryComponents;

@end
