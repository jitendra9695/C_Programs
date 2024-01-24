//function for FACTORIAL of n
#include <stdio.h>
int fact(int x);
int main()
{
    int n;
    printf("enter any number \n");
    scanf("%d", &n);
    printf("%d",fact(n));
    return 0;
}
int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        int factnum1 = fact(x-1);
        int factn = factnum1*x;
        return factn;
    }
}