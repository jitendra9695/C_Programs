#include<stdio.h>
int main()
{
    int num, d1, d2, d3, d4, reverse, original;
    printf(" enter the 3 digit number ");
    scanf("%d", &num);
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;
    original=d1*1000+d2*100+d3*10+d4;
    reverse=d4*1000+d3*100+d2*10+d1;
    printf(" reverse number is %d\n ", reverse);
    if ( reverse == original)
    {
        printf(" the number is palindrome ");
    }
    else
    printf(" number is not palindrome");
    return 0;
}