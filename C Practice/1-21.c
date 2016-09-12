/*************************************************************************
  > File Name: 1-21.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sun Sep 11 12:55:04 2016
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, x1=0, x2;
    day = 9;
    x2=1;
    while(day>0)
    {
        x1=(x2+1)*2;
        x2=x1;
        day--;
    }

    printf("Sum is %d\n",x1);
    return 0;
}
