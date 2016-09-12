/*************************************************************************
  > File Name: 1-23.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sun Sep 11 13:16:23 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2-i;j++){
            printf(" ");
        }
        for(k=0;k<=2*i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=4-2*i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
