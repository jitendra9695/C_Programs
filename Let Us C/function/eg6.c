#include<stdio.h>
float square(float b);
int main()
{
    float a;
    printf("enter any number \n");
    scanf("%f", &a);
    printf("square of %f is\n", a);
    square(a);
    return 0;
}
float square(float b)
{
    float y ;
    y= b*b;
    printf("%f", y);
    return (y);
}