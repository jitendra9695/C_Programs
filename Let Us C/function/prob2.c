#include<stdio.h>
float power(float, int);
int main()
{
    float n, pov;
    int m;
    printf("enter the number and its power\n");
    scanf("%f %d",&n, &m);
    pov=power(n,m);
    printf("%f to the power %d is %f", n, m, pov);
    return 0;
}
float power(float x, int y)
{
    float p=1;
    for(int i=1; i<=y; i++)
    {
        p=p*x;
    }
    return (p);
}
