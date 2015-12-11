#include <stdio.h>

int main()
{
    for (int i = 1, max = 1; max != 10; )
    {
        if (i <= max)
        {
            printf("*");
            i++;
        }
        else
        {
            printf("\n");
            max++;
            i = 1;
        }
        
    }
    
    for (int i = 1, mid = 5, lineNumber = 0; lineNumber < 5; )
    {
        if (i >= mid - lineNumber && i <= mid + lineNumber )
        {
            printf("*");
            i++;
        }
        else if (i == 2 * mid)
        {
            printf("\n");
            i = 1;
            lineNumber++;
        }
        else
        {
            printf(" ");
            i++;
        }
        
        
    }
    return 0;
}