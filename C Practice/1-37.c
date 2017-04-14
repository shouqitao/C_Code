/*************************************************************************
 > File Name: 1-37.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Wed Sep 14 23:25:54 2016
 ************************************************************************/

#include <stdio.h>
#define N 10

int main()
{
    int i, j, a[N], temp;
    printf("Please input 10 integers: \n");
    for(i=0; i<N; i++)
        scanf("%d",&a[i]);
    for(i=0; i<N-1; i++)
    {
        int min = i;
        for(j=i+1; j<N; j++)
            if(a[min]>a[j])
                min=j;
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("The sorted lsit is :\n");
    for(i=0; i<N; i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
