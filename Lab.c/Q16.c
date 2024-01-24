#include<stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, percentage;
    printf(" enter the marks obtained by student : ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    percentage = 100*(sub1+sub2+sub3+sub4+sub5)/500;
    printf(" percentage= %f ", percentage);
    if( percentage>=60)
    {
        printf(" first division ");
    }
    else if ( percentage>=50 && percentage<=59)
    {
        printf(" second division ");
    }
    else if( percentage>=40 && percentage<=49)
    {
        printf(" third division ");
    }
    else
    {
        printf(" fail ");
    }
    return 0 ;
}