#include<stdio.h>
int main()
{
    int min, max, n=1, i ;
    printf(" enter the range of numbers\n ");
    scanf("%d %d", &min, &max );
    printf("prime number from %d and %d is\n", min, max);
    for(n=min; n<=max; n++)
    {
        i=2;
        for( i=2; i<n; i++)
        {
            if( n%i == 0)
            break ;
        }
        if ( i==n)
        printf("%d\n", n);
    }
    return 0;
}