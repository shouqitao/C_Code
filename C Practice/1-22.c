/*************************************************************************
  > File Name: 1-22.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Sun Sep 11 13:02:04 2016
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i,j,k;
    for(i='x';i<='z';i++)
    {
        for(j='x';j<='z';j++)
        {
            if(i!=j)
            {
                for(k='x';k<='z';k++)
                {
                    if(i!=k&&j!=k)
                    {
                        if(i!='x'&&k!='x'&&k!='z')
                            printf("The order is: a--%c\tb--%c\tc--%c\n",i,j,k);
                    }
                }
            }
        }
    }
    return 0;
}
