/*************************************************************************
 > File Name: 1-38.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Wed Sep 14 23:34:57 2016
 ************************************************************************/

#include <stdio.h>
#define N 3

int main()
{
    int i, j, a[N][N], sum=0;
    printf("Please intput the matrix(3*3)\n");
    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        sum+=a[i][i];
    printf("the corner line sum is :%d\n",sum);
    return 0;
}
