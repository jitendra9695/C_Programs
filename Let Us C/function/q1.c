#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("sum of digit its = %d",sum(n));
    return 0;
}
int sum(int x)
{
    int d, sum=0;
    while(x!=0)
    {
        d=x%10;
        x=x/10;
        sum=sum+d;
    }
    return (sum);
}