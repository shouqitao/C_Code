/*************************************************************************
 > File Name: 1-66.c
 > Purpose: 
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Mon Sep 19 22:42:16 2016
 ************************************************************************/

#include <stdio.h>

void swap(int *, int *);
int main(void)
{
    int a,b,c;
    int *p1,*p2,*p3;
    printf("input a, b, c:\n");
    scanf("%d%d%d",&a,&b,&c);
    p1=&a;
    p2=&b;
    p3=&c;
    if(a>b)
        swap(p1,p2);
    if(a>c)
        swap(p1,p3);
    if(b>c)
        swap(p2,p3);
    printf("%d %d %d\n",a,b,c);
}

void swap(int *s1, int *s2)
{
    int t;
    t=*s1;
    *s1=*s2;
    *s2=t;
}
