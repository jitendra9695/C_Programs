#include <stdio.h>
int main()
{
    int n ;
    printf("enter any number \n ");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf(" given number is an even number");
    }
    else
    {
        printf(" given number is an odd number ");
    }
    return 0;
}