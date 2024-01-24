#include<stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf( "enter 3 angles of triangle");
    scanf("%d %d %d", &angle1, &angle2, &angle3 );
    if( angle1+ angle2+ angle3 == 180)
    {
    printf( "it is a triangle" );
    }
    else
    {
        printf( "it is not a triangle");
    }
    return 0;
}    