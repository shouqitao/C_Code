/*************************************************************************
  > File Name: 1-26.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sun Sep 11 13:35:56 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int fact();
    for(i=0;i<6;i++)
    {
        printf("%d!=%d\n",i,fact(i));
    }
    return 0;
}

int fact(int j)
{
    int sum;
    if(j==0)
        sum=1;
    else
        sum=j*fact(j-1);
    return sum;
}
