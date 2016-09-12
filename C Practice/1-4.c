#include <stdio.h>

int main()
{
    int day, month, year, sum, leap;
    printf("\nPlease input year, month, day, Format as YYYY,MM,DD\n");
    scanf("%d,%d,%d",&year,&month,&day);   /* format as YYYY,MM,DD) */
    switch(month)
    {
        case 1:
            sum=0;
            break;
        case 2:
            sum=31;
            break;
        case 3:
            sum=59;
            break;
        case 4:
            sum=90;
            break;
        case 5:
            sum=120;
            break;
        case 6:
            sum=151;
            break;
        case 7:
            sum=181;
            break;
        case 8:
            sum=212;
            break;
        case 9:
            sum=243;
            break;
        case 10:
            sum=273;
            break;
        case 11:
            sum=304;
            break;
        case 12:
            sum=334;
            break;
        default:
            printf("data error");
            break;
    }

    sum = sum + day;   /* add the current month's days. */
    if(year%400==0||(year%4==0&&year%100!=0))
    {
        leap=1;
    }else
    {
        leap=0;
    }

    if(leap==1&&month>2)
    {
        sum++;
    }

    if(sum==1)
        printf("This is the first day of the year!");
    if(sum==2)
        printf("this is the second day of the year!");
    if(sum>2)
        printf("this is the %dth day of the year.",sum);
    printf("\n");

    return 0;
}
