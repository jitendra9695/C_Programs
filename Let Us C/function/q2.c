#include<stdio.h>
int reverse(int );
int main()
{
    int n, rev;
    printf("enter the number \n");
    scanf("%d", &n);
    rev=reverse(n);
    if (n==rev)
    {
        printf("palindrome number");
    }
    
    return 0;
}
int reverse(int x)
{
    int d;
    printf("reverse of this number is ");
    while(x!=0)
    {
        d=x%10;
        printf("%d",d);
        x=x/10;
    }
    
}