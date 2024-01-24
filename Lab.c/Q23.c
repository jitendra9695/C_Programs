#include<stdio.h>
int main()
{
    int num, i, factorial;
    printf(" enter the number : ");
    scanf("%d", &num );
    factorial =i=1;
    while( i<= num )
    {
        factorial= factorial*i;
        i++;
    }
    printf("factorial value of %d = %d\n", num, factorial );
    return 0;
}