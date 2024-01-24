// 20/01/22
#include<stdio.h>
int main()
{
    int year, z;
    printf(" enter the year ");
    scanf(" %d", &year );
    if(year%100==0)
    {
        if( year%400==0)
        {
            printf("this year is a leap year");
        }
        else
        {
            printf(" year is not leap year");
        }
    }
    else{
        if(year % 4==0)
        {
            printf(" year is leap year");
        }
        else
        {
            printf(" not a leap year");
        }
    }
    return 0;
}