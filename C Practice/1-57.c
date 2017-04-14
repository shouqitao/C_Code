/*************************************************************************
 > File Name: 1-57.c
 > Purpose: 
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Mon Sep 19 21:44:24 2016
 ************************************************************************/

#include <stdio.h>
#include "Graphics.h"

int main()
{
    int driver,mode,i;
    float x0,y0,x1,y1;
    float j=12,k;
    driver=VGA;mode=VGAHI;
    initgraph(&drvier,&mode,"");
    setbkcolor(GREEN);
    x0=263;y0=263;y1=275;x1=275;
    for(i=0;i<18;i++)
    {
        setcolor(5);
        line(x0,y0,x1,y1);
        x0=x0-5;
        y0=y0-5;
        x1=x1+5;
        y1=y1+5;
        j=j+10;
    }
}

