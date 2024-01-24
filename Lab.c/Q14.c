#include<stdio.h>
int main()
{
    float l, b, area, perimeter;
    printf(" enter the length and breadth of a rectangle : ");
    scanf("%f %f", &l, &b);
    area= l*b ;
    perimeter=2*(l+b);
    printf("area of rectangle= %f\n", area );
    printf(" perimeter of rectangle= %f\n", perimeter );
    if( area> perimeter)
    {
        printf("area of the rectangle is greater than its perimeter");
    } 
    return 0;
}