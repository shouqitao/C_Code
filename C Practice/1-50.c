/*************************************************************************
 > File Name: 1-50.c
 > Purpose: 
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Thu Sep 15 22:41:51 2016
 ************************************************************************/
#include "test.h"
#include <stdio.h>

int main()
{
    int i=10;
    int j=20;
    if(i LAG j)
        printf("%d Greater than %d\n",i,j);
    else if(i EQ j)
        printf("%d Equal %d\n",i,j);
    else if(i SMA j)
        printf("%d Less than %d\n",i,j);
    else
        printf("not defined\n");
    return 0;
}
