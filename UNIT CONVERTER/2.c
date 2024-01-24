#include <stdio.h>
int main()
{
    int n, r, b=0, base=1;
    printf("enter binary number \n");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        b=b+r*base;
        n=n/10;
        base=base*2;
    }
    printf("decimal no %d", b);
    return 0;
}