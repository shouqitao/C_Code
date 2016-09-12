/*************************************************************************
  > File Name: 1-10.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sat Sep 10 12:07:46 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i, j;
    printf("\1\1\n");
    for(i=1; i<11; i++){
        for(j=1; j<=i; j++)
            printf("%c%c",219,219);
        printf("\n");
    }

    return 0;
}
