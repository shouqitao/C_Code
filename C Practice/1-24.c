/*************************************************************************
 > File Name: 1-24.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 13:27:18 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i,t;
    float sum = 0;
    float a = 2, b = 1;
    for(i=1;i<=20;i++)
    {
        sum=sum+a/b;
        t=a;
        a=a+b;
        b=t;
    }
    printf("%9.6f\n",sum);
    return 0;
}
