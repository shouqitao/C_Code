/*************************************************************************
  > File Name: 1-36.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Wed Sep 14 23:20:43 2016
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, n;
    for(i=2; i<=100; i++)
    {
        k=(int)sqrt(i);
        for(j=2; j<=k; j++)
            if(i%j==0)
                break;
        if(j>k)
        {
            printf("%-d ",i);
            n++;
            if(n%5==0)
                printf("\n");
        }
    }
    return 0;
}
