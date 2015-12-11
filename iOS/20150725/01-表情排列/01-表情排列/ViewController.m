//
//  ViewController.m
//  01-表情排列
//
//  Created by 赵康 on 15-7-25.
//  Copyright (c) 2015年 赵康. All rights reserved.
//

#import "ViewController.h"

#define kImageWidthAndHeight 60

@interface ViewController ()

@end

@implementation ViewController

// 添加一个表情
- (void)addImage:(NSString *)icon x:(CGFloat)x y:(CGFloat)y
{
    UIImageView *one = [[UIImageView alloc] init];
    one.image = [UIImage imageNamed:icon];
    one.frame = CGRectMake(x, y, kImageWidthAndHeight, kImageWidthAndHeight);
    [self.view addSubview:one];
}

// 添加或者调整所有表情
- (void)adjustImageWithColumn:(int)columns add:(BOOL)add
{
    // 计算间距
    CGFloat margin = (self.view.frame.size.width - kImageWidthAndHeight * columns) / (columns + 1);
    
    // 定义左上角的表情的x和y
    CGFloat originY = 110;
    CGFloat originX = margin;
    
    // 计算所有表情的位置
    for (int i = 0; i < 20; i++) {
        
        
        // 计算第i个表情对应的行和列
        int col = i % columns;
        int row = i / columns;
        
        // 计算第i个表情的x和y
        CGFloat x = originX + col * (kImageWidthAndHeight + margin);
        CGFloat y = originY + row * (kImageWidthAndHeight + margin);
        
        if (add) { // 添加所有表情
            int num = i % 9;
            NSString *imageName = [NSString stringWithFormat:@"%d.jpg", num];
            // 添加表情
            [self addImage:imageName x:x y:y];
        } else { // 更改所有表情
            // 取出i + 2位置对应的imageView，设置x和y
            // +2是为了跳过最前面的UISegmentControl和Label
            UIView *child = self.view.subviews[i + 2];
            
            // 取出frame
            CGRect tempFrame = child.frame;
            
            // 修改x、y
            tempFrame.origin = CGPointMake(x, y);
            
            // 重新赋值
            child.frame = tempFrame;
        }
    }
}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self adjustImageWithColumn:2 add:YES];
    
}



#pragma mark 当索引改变时，更改表情的列数
- (IBAction)indexChanged:(UISegmentedControl *)sender {
    [UIView beginAnimations:nil context:nil];
    [UIView setAnimationDuration:0.5];
    
    int columns = (int)(sender.selectedSegmentIndex + 2);
    [self adjustImageWithColumn:columns add:NO];
    
    [UIView commitAnimations];

}


@end
