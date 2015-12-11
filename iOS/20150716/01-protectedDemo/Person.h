//
//  Person.h
//  01-protectedDemo
//
//  Created by 赵康 on 15-7-16.
//  Copyright (c) 2015年 赵康. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    // @private
    int _age;
}
- (void)setAge:(int)age;
- (int)age;
@end
