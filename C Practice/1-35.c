/*************************************************************************
 > File Name: 1-35.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Wed Sep 14 23:12:33 2016
 ************************************************************************/

#include <stdio.h>

void reverse(char *s)
{
    int len = 0;
    char *p = s;
    while(*p != 0)
    {
        len++;
        p++;
    }

    int i = 0;
    char c;
    while(i <= len/2 -1)
    {
        c=*(s+i);
        *(s+i)=*(s+len-1-i);
        *(s+len-1-i)=c;
        i++;
    }
}

int main()
{
    char s[]="www.runoob.com";
    printf("'%s' =>\n",s);
    reverse (s);
    printf("'%s'\n",s);
    return 0;
}
