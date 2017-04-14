/*************************************************************************
 > File Name: 1-51.c
 > Purpose: 
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Fri Sep 16 09:23:25 2016
 ************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    a=077;
    b=a&3;
    printf("a & b (decimal) is %d \n",b);
    b&=7;
    printf("a & b (decimal) is %d \n",b);
    return 0;
}
