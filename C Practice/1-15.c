/*************************************************************************
 > File Name: 1-15.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 10:39:23 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    int score;
    char grade;
    printf("Please input a integer: ");
    scanf("%d",&score);
    grade=(score>90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
}
