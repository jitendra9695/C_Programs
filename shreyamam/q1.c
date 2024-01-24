#include<stdio.h>
int main()
{
    int a, i, b, c ;
    printf(" 50 Fibonacci numbers are :- \n");
    a= 0;
    b= 1;
    for(i=1;i<=50;i++)
    {
        printf("%d", a);
        c=a+b;
        a=b;
        b=c;
    printf("\n");

    }
    
    return 0;
}