#include<stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    float radius, circumference;
    printf("length and breadth of rectangle : ");
    scanf("%f %f", &length, &breadth);
    perimeter= 2*(length+breadth);
    area= length*breadth;
    printf("perimeter of rectangle= %f\n", perimeter);
    printf("area of rectangle=%f\n", area);
    printf("radius of circle :");
    scanf("%f", &radius);
    circumference= 2*3.14*radius;
    area=3.14*radius*radius;
    printf(" circumference of circle=%f", circumference);
    printf(" area of circle= %f", area);
    return 0;

}