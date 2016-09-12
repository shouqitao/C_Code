/*************************************************************************
  > File Name: 1-30.c
  > Author: Tony
  > Mail: shouqitao@163.com
  > Created Time: Mon Sep 12 20:15:27 2016
 ************************************************************************/

#include <stdio.h>

int main()
{
  long ge, shi, qian, wan, x;
  printf("请输入 5 位数字：");
  scanf("%ld", &x);
  wan = x / 10000;         /*分解出万位*/
  qian = x % 10000 / 1000; /*分解出千位*/
  shi = x % 100 / 10;      /*分解出十位*/
  ge = x % 10;             /*分解出个位*/
  if (ge == wan && shi == qian)
  { /*个位等于万位并且十位等于千位*/
    printf("这是回文数\n");
  }
  else
  {
    printf("这不是回文数\n");
  }
}
