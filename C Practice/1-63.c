/*************************************************************************
  > File Name: 1-63.c
  > Purpose: 
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Mon Sep 19 22:35:09 2016
 ************************************************************************/

nclude "stdio.h"
#include "graphics.h"
#include "conio.h"
int main()
{
    int x=360,y=160,driver=VGA,mode=VGAHI;
    int num=20,i;
    int top,bottom;
    initgraph(&driver,&mode,"");
    top=y-30;
    bottom=y-30;
    for(i=0;i<num;i++)
    {
        ellipse(250,250,0,360,top,bottom);
        top-=5;
        bottom+=5;
    }
    getch();
}
