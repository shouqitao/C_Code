#include <stdio.h>
#include <math.h>

int main()
{
    long int x, y, i;
    for(i = 1; i < 100000; i++)
    {
        x = sqrt (i + 100);
        y = sqrtf (i + 268);
        if(x * x == i + 100 && y * y == i + 268)
            printf("\n%ld\n", i);
    }
    return 0;
}
