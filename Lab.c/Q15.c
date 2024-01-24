#include<stdio.h>
int main()
{
    float s1, s2, s3;
    printf("enter three sides of triangle ");
    scanf(" %f %f %f", &s1, &s2, &s3);
    if( s1== s2 && s1== s3)
    {
        printf(" equilateral triangle ");
    }
    else if ( s1== s2 || s1== s3 || s2== s3)
    {
        printf(" isosceles triangle ");
    }
    else if ( s1*s1== s2*s2+ s3*s3 || s2*s2== s1*s1 + s3*s3 || s3*s3== s1*s1 + s2*s2 )
    {
        printf(" right angled triangle"); 
    }
    else
    {
        printf(" scalene triangle ");
    }
}