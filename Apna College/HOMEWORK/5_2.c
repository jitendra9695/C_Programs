#include <stdio.h>
int sqr(int x);
int main()
{
    int n;
    printf("enter any number \n");
    scanf("%d",&n);
    printf("square root of %d is %d",n,sqr(n));
    return 0;
}
int sqr(int x)
{
    int i;
    for(i=1; i*i<=x; i++)
    {
        if(i*i == x)
        {
            return (i);
        }
    }
}