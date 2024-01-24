#include<stdio.h>
int main()
{
    int x;
    printf(" enter the number ");
    scanf("%d", &x);
    if( x<0)
    {
        printf(" absolute value is %d", x*(-1));
    }
    else 
    {
        printf(" absolute value is %d", x);
    }
    return 0 ;
}