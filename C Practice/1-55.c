/*************************************************************************
  > File Name: 1-55.c
  > Purpose: 
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Fri Sep 16 09:51:15 2016
 ************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    a=234;
    b=~a;
    printf(" a's nor is (decimal) %d \n",b);
    a=~a;
    printf(" a's nor is (decimal) %x \n",b);
    return 0;
}
