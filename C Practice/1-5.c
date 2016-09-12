#include <stdio.h>

int main()
{
    int x, y , z , t;
    printf("Please input three integers:\n");
    scanf("%d%d%d", &x, &y, &z);
    if(x > y)
    {
        t = x;
        x = y;
        y = t;
    }

    if(x > z)
    {
        t = x;
        x = z;
        z = t;
    }

    if(y > z)
    {
        t = y;
        z = y;
        y = t;
    }

    printf("form min to max: %d %d %d\n",x,y,z);

    return 0;
}
