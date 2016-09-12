/*************************************************************************
  > File Name: 1-19.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sun Sep 11 11:58:59 2016
 ************************************************************************/

#include<stdio.h>
#define N 1000
int main()
{
    int i, j, k, n, sum;
    int a[256];
    for(i = 2; i <= N; i++)
    {
        sum = a[0] = 1;
        k = 0;
        for(j = 2; j <= (i / 2); j++)
        {
            if(i % j == 0)
            {
                sum += j;
                a[++k] = j;
            }
        }
        if(i == sum)
        {
            printf("%d=%d", i, a[0]);
            for(n = 1; n <= k; n++)
                printf("+%d", a[n]);
            printf("\n");
        }

    }
    return 0;
}
