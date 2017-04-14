/*************************************************************************
 > File Name: 1-53.c
 > Purpose: 
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Fri Sep 16 09:34:23 2016
 ************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    a=077;
    b=a^3;
    printf(" b's value is %d \n",b);
    b^=7;
    printf(" b's value is %d \n",b);
    return 0;
}
