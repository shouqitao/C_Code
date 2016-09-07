/********************************************
* Name: celsius.c                           *
* Purpost: Computer the dimensional weight. *
* Author: T.Soul                            *
* Date Written: 9/5/2016                    *
*********************************************/

#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0/9.0)

int main()
{
    float fahrenheit, celsius;
    printf("Enter fahrenheit temperature: \n");
    sacnf("%d", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}