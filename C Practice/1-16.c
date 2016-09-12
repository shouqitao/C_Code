/*************************************************************************
 > File Name: 1-16.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 10:43:32 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a, b,t,r;
    printf("Please input two integers: ");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        t=b;
        b=a;
        a=t;
    }

    r=a%b;

    int n= a*b;
    while (r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("zhe liang ge shu de zui da gong yue shu shi %d, zuixiao gongbeishu shi%d",b,n/b);

    return 0;
}
