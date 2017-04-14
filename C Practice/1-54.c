/*************************************************************************
  > File Name: 1-54.c
  > Purpose: 
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Fri Sep 16 09:38:05 2016
 ************************************************************************/

#include <stdio.h>

int main()
{
    unsigned a,b,c,d;
    printf("Please input a integer: \n");
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%o\n%o\n",a,d);
    return 0;
}
