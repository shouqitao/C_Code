/*************************************************************************
 > File Name: 1-18.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 11:36:42 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int s=0,a,n,t;
    printf("Pleas input 'a' and 'n': \n");
    scanf("a=%d, n=%d",&a,&n);
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}
