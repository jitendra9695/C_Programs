#include <stdio.h>
int power(int , int );
int main()
{
    int n;
    int p;
    printf("enter the number and its power \n");
    scanf("%d %d", &n, &p);
    power(n,p);
    return 0;
}
int power(int m, int x)
{
    int val=1;
    for(int i=1; i<x; i++)
    {
        val=val*m;
    }
     printf("%d to the power %d if %f", m, x, val);
    return 0;
}
