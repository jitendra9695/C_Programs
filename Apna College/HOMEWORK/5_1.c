#include <stdio.h>
int sum(int ,int);
int main()
{
    int a, b, c;
    printf("enter any two numbers \n");
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("sum of two numbers is = %d", c);
    return 0;
}
int sum(int x, int y)
{
    return(x+y);
}