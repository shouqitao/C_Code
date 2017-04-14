/*************************************************************************
  > File Name: 1-49.c
  > Purpose: 
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Thu Sep 15 22:24:45 2016
 ************************************************************************/

#include <stdio.h>
#define MAX
#define MAXIMUM(x,y) (x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x

int main()
{
    int a=10,b=20;
#ifdef MAX
    printf("The Greater Num is %d\n",MAXIMUM(a,b));
#else
    printf("The less Num is %d\n",MINIMUM(a,b));
#endif
#ifndef MIN
    printf("The less Num is %d\n",MINIMUM(a,b));
#else
    printf("The greater Num is %d\n",MAXIMUM(a,b));
#endif

#undef MAX
#ifdef MAX
    printf("The greater Num is %d\n",MAXIMUM(a,b));
#else
    printf("The less Num is %d\n",MINIMUM(a,b));
#endif
#define MIN
#ifndef MIN
    printf("The less Num is %d\n",MINIMUM(a,b));
#else
    printf("The greater Num is %d\n",MAXIMUM(a,b));
#endif
    return 0;
}
