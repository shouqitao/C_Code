/*************************************************************************
 > File Name: 1-25.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 13:30:34 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    long double sum,mix;
    sum = 0, mix= 1;
    for(i=1;i<=20;i++)
    {
        mix=mix*i;
        sum=sum +mix;
    }
    printf("%Lf\n",sum);
    return 0;
}
