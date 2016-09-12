/*************************************************************************
 > File Name: 1-20.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 12:17:08 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    float h,s;
    s=h=100;
    h=h/2;
    for(int i=2;i<=10;i++)
    {
        s=s+2*h;
        h=h/2;
    }

    printf("the distance of 10th hit the ground is %f m,and the the high is %f m.\n",s,h);
    return 0;
}
