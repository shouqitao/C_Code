/*************************************************************************
 > File Name: 1-17.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Sun Sep 11 11:24:55 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    char c;
    int letters=0,space=0,digits=0,others=0;
    printf("Please input some charactors: \n");
    while((c=getchar())!='\n')
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            letters++;
        else if(c>='0'&&c<='9')
            digits++;
        else if(c==' ')
            space++;
        else
            others++;
    }
    printf("charactors=%d,digits=%d,space=%d,others=%d",letters,digits,space,others);
    return 0;
}
