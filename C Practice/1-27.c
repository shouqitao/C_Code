/*************************************************************************
  > File Name: 1-27.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sun Sep 11 14:17:00 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i=5;
    void palin(int n);
    printf("Please input 5 integer\40:\40");
    palin(i);
    printf("\n");
    return 0;
}

void palin(n)
int n;
{
    char next;
    if(n<1)
    {
        next=getchar();
        printf("the result convert output is \40:\40");
        putchar(next);
    }else
    {
        next = getchar();
        palin(n-1);
        putchar(next);
    }
}
