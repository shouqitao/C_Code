/*************************************************************************
  > File Name: 1-11.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sat Sep 10 12:11:07 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int f1=1, f2=1, i;
    for(i=1;i<=20;i++)
    {
        printf("%12d%12d",f1,f2);
        if(i%2==0)
            printf("\n");
        f1=f1+f2;
        f2=f1+f2;
    }
    return 0;
}
