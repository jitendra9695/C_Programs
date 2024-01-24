// 20/01/22
#include<stdio.h>
int main()
{
    int num, d1, d2, d3, reverse, original;
    printf(" enter the 3 digit number ");
    scanf("%d", &num);
    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;
    original=d1*100+d2*10+d3;
    reverse= d3*100+d2*10+d1;
    printf(" reverse number is %d\n ", reverse);
    if ( reverse == original)
    {
        printf(" yes it is palindrome number");
    }
    else
    printf("No it is not a palindrome number");
    return 0;
}