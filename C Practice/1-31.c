/*************************************************************************
 > File Name: 1-31.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Mon Sep 12 20:32:35 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    char i,j;
    printf("Please input the first letter:\n");
    scanf("%c",&i);
    getchar(); /* getchar() to catch the '\n' */
    switch(i)
    {
        case 'm':
            printf("monday\n");
            break;
        case 'w':
            printf("wednesday\n");
            break;
        case 'f':
            printf("friday\n");
            break;
        case 't':
            printf("Please input the sencond letter\n");
            scanf("%c",&j);
            if(j=='u'){
                printf("tuesday\n");
                break;
            }
            if(j=='h'){
                printf("thursday\n");
                break;
            }
        case 's':
            printf("Please input the sencond letter\n");
            scanf("%c",&j);
            if(j=='a'){
                printf("saturday\n");
                break;
            }
            if(j=='u'){
                printf("sunday\n");
                break;
            }
        default:
            printf("error\n");
    }
    return 0;
}
