/********************************************
* Name: dweight2.c                           *
* Purpost: Computer the dimensional weight. *
* Author: T.Soul                            *
* Date Written: 9/5/2016                    *
*********************************************/

#include <stdio.h>
int main()
{
    int height, length, width，volumn, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volumn = height * length * width;
    weight = (volumn + 165) / 166;

    printf("Volumn (cubic inches): %d\n", volumn);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}