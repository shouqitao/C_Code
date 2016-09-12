/*************************************************************************
 > File Name: 1-28.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Mon Sep 12 19:54:29 2016
 ************************************************************************/

#include<stdio.h>

int age(n)
    int n;
{
    int c;
    if(n==1)
        c=10;
    else
        c=age(n-1)+2;
    return c;
}

int main()
{
    printf("%d\n",age(5));
    return 0;
}
