#import <Foundation/Foundation.h>
#import <math.h>

// 点
@interface Point2D : NSObject
{
    double _x; // x值
    double _y; // y值
}

// x值的getter和setter
- (void)setX:(double)x;
- (double)x;

// y值的getter和setter
- (void)setY:(double)y;
- (double)y;

// 同时设置x和y
- (void)setX:(double)x andY:(double)y;

// 计算跟其他点的距离
- (double)distanceWithOther:(Point2D *)other;
// 计算两个点之间的距离
+ (double)distanceBetweenPoint1:(Point2D *)p1 andPoint2:(Point2D *)p2;
@end

@implementation Point2D
// x值的getter和setter
- (void)setX:(double)x
{
    _x = x;
}
- (double)x
{
    return _x;
}

// y值的getter和setter
- (void)setY:(double)y
{
    _y = y;
}
- (double)y
{
    return _y;
}

// 同时设置x和y
- (void)setX:(double)x andY:(double)y
{
    /*
    _x = x;
    _y = y;
     */
    [self setX:x ];
    [self setY:y ];
}

// 计算跟其他点的距离
- (double)distanceWithOther:(Point2D *)other
{
    return [Point2D distanceBetweenPoint1:self andPoint2:other];
}
// 计算两个点之间的距离
+ (double)distanceBetweenPoint1:(Point2D *)p1 andPoint2:(Point2D *)p2
{
    // x1-x2
    double DeltaX = [p1 x] - [p2 x];
    // (x1-x2)的平方
    double SquareOfDeltaX = pow(DeltaX,2);

    // y1-y2
    double DeltaY = [p1 y] - [p2 y];
    // (y1-y2)的平方
    double SquareOfDeltaY = pow(DeltaY,2);
    
    // 返回距离
    return sqrt(SquareOfDeltaX + SquareOfDeltaY);
}

@end

//圆
@interface Circle : NSObject
{
    double _radius;
    Point2D *_point;
}
// 半径的getter和setter
- (void)setRadius:(double)radius;
- (double)radius;

// 圆心的getter和setter
- (void)setPoint:(Point2D *)point;
- (Point2D *)point;

@end

@implementation Circle
// 半径的getter和setter
- (void)setRadius:(double)radius
{
    _radius = radius;
}
- (double)radius
{
    return _radius;
}

// 圆心的getter和setter
- (void)setPoint:(Point2D *)point
{
    _point = point;
}
- (Point2D *)point
{
    return _point;
}

@end

int main()
{
    Circle *c1 = [Circle new];
    
    // 创建圆心对象
    Point2D *p1 = [Point2D new];
    [p1 setX:10 andY:15];
    
    // 先设置圆心
    [c1 setPoint:p1];
    
    [[c1 point] setX:15];
    [c1 setRadius:30];
    
    NSLog(@"圆的圆心:(%lf,%lf), 半径:%lf", [[c1 point] x], [[c1 point] y], [c1 radius]);
    
    /*
    Point2D *p1 = [Point2D new];
    [p1 setX:10 andY:15];
    
    Point2D *p2 = [Point2D new];
    [p2 setX:13 andY:19];
     
    
    double distance = [p1 distanceWithOther:p2];
    NSLog(@"两点间的距离是%lf", distance);
     */
    
    return 0;
}







