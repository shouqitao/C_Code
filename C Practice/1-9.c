/*************************************************************************
 > File Name: 1-9.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sat Sep 10 11:38:38 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i, j;
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
            if((i + j) % 2 == 0)
                printf("%c%c", 219, 219);
            else printf("  ");
        printf("\n");
    }
    return 0;
}