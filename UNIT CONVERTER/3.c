#include <stdio.h>
int main()
{
    int n, r, b=0, base=1;
    printf("enter number\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        b=b+r*base;
        n=n/2;
        base=base*10;
    }
    printf("binary %d", b);
    return 0;
}