//
//  SubStudent.m
//  01-protectedDemo
//
//  Created by 赵康 on 15-7-16.
//  Copyright (c) 2015年 赵康. All rights reserved.
//

#import "SubStudent.h"

@implementation SubStudent
- (void)test2
{
    Student *s = [Student new];
    s->_age = 33;
    NSLog(@"%d", s->_age);
}
@end
