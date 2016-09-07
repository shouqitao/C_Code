/********************************************
* Name: dweight.c                           *
* Purpost: Computer the dimensional weight. *
* Author: T.Soul							*
* Date Written: 9/5/2016					*
*********************************************/

#include <stdio.h>
int main()
{
    int height, length, width, volumn, weight;

    height = 8;
    length = 12;
    width = 10;
    volumn = height * length * width;
    weight = (volumn + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volumn (cubic inches): %d\n", volumnZ);
    printf("dimensional weight (pounds): %d\n".weight);

    return 0;
}