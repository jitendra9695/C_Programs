// 18/01/22
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf(" enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf(" a=%d", a);
    printf(" b=%d", b);
    return 0;
}