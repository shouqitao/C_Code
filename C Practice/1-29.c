/*************************************************************************
 > File Name: 1-29.c
 > Author: Tony
 > Mail: shouqitao@163.com
 > Created Time: Mon Sep 12 19:58:01 2016
 ************************************************************************/

#include<stdio.h>

int main()
{
    long a,b,c,d,e,x;
    printf("Please input 5 integers: ");
    scanf("%ld",&x);
    a=x/10000;
    b=x%10000/1000;
    c=x%1000/100;
    d=x%100/10;
    e=x%10;

    if(a!=0){
        printf("it is 5 digit, convert order is %ld%ld%ld%ld%ld",e,d,c,b,a);
    }else if(b!=0){
        printf("it is 4 digit, convert order is %ld%ld%ld%ld",e,d,c,b);
    }else if(c!=0){
        printf("it is 3 digit, convert order is %ld%ld%ld",e,d,c);
    }else if(d!=0){
        printf("it is 2 digit, convert order is %ld%ld",e,d);
    }else if(e!=0){
        printf("it is 1 digit, convert order is %ld",e);
    }
    return 0;
}
