/************************************************************************
 > File Name: 1-56.c
 > Purpose: 
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Fri Sep 16 09:55:15 2016
 ************************************************************************/

#include <stdio.h>
#include <graphics.h>

int main()
{
    int driver, mode, i;
    float j=1, k=1;
    driver=AVG;
    mode=VGAHI;
    initgraph(&driver,&mode,"");
    setbkcolor(YELLOW);
    for(i=0;i<=25;i++)
    {
        setcolor(8);
        circle(310,250,k);
        k=k+j;
        j=j+0.3;
    }
    return 0;
}
