// 17/01/22
#include<stdio.h>
int main()
{
    int n, d1, d2, d3, d4,d5, sum ;
    printf(" enter 5 digit number : ");
    scanf(" %d", &n);
    d5 = n%10;
    n = n/10;
    d4 = n%10;
    n = n/10;
    d3 = n%10;
    n = n/10;
    d2 = n%10;
    n = n/10;
    d1 = n%10;
    sum = d5+d4+d3+d2+d1 ;
    printf(" the sum of the number is %d", sum );
     return 0;
}      