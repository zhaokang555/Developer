#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    //用户输入的值，创建n*n的矩阵
    int n;
    //蛇形从1开始计数
    int count = 1;
    //a[x][y],x是二维数组的第一个下标，y是第二个。
    //round是蛇形矩阵的第几圈，从0开始。
    int x,y,round;
    
    scanf("%d",&n);
    int (*a)[n] = calloc(n*n,sizeof(int));
    
    //如果n是1，则直接输出。
    if(n == 1){
        a[0][0] = count;
    }else{
        //下面以n=5为例
        //一共有2(5/2)圈蛇形
        for(round=0; round<n/2; round++){
            /* 以下循环执行后输出如下：
             1 2 3 4 5
             */
            
            x = round;
            for(y=round;y<n-round;y++){
                a[x][y]=count;
                count++;
            }
            /* 以下循环执行后输出如下：
             1 2 3 4 5
             6
             7
             8
             */
            y = n - round - 1;
            for(x=round+1;x<n-round-1;x++){
                a[x][y]=count;
                count++;
            }
            
            /* 以下循环执行后输出如下：
             1  2  3  4  5
             6
             7
             8
             13 12 11 10 9
             */
            x = n - round - 1;
            for(y=n-round-1;y>=round;y--){
                a[x][y]=count;
                count++;
            }
            
            /* 以下循环执行后输出如下：
             1  2  3  4  5
             16          6
             15          7
             14          8
             13 12 11 10 9
             */
            y = round;
            for(x=n-round-1-1;x>round;x--){
                a[x][y]=count;
                count++;
            }
        }
        /* 上面的大循环执行后输出如下：
         1  2  3  4  5
         16 17 18 19 6
         15 24    20 7
         14 23 22 21 8
         13 12 11 10 9
         */
        if(n%2 == 1){
            //如果n值奇数，将最中间的空填上
            a[n/2][n/2] = count;
        }
    }
    //打印矩阵
    for(x=0;x<n;x++){
        for(y=0;y<n;y++){
            printf("%d ",a[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    
    free(a);
    return 0;
}

