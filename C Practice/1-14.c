/*************************************************************************
 > File Name: 1-14.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 10:10:16 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n, i;
    printf("Please input a integer:\n");
    scanf("%d",&n);
    printf("%d=",n);
    for(i=2; i <= n; i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
            if(n!=1)
                printf("*");
        }
    }

    printf("\n");
    return 0;
}
