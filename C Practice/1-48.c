#include <stdio.h>
#define SMA <
#define LAG >
#define EQ ==

int main()
{
    int i, j;
    printf("Please input two integers: \n");
    scanf("%d %d", &i, &j);
    if(i LAG j)
        printf("%d is greater then %d \n", i, j);
    else if(i EQ j)
        printf("%d is equal %d \n", i, j);
    else if( i SMA j)
        printf("%d is less the %d \n", i, j);
    return 0;
}
