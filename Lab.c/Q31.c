#include<stdio.h>
int main()
{
    int i, a, b, num, c;
    printf(" enter the number \n");
    scanf("%d", &num);
    a=0;
    b=1;
    for(i=1; i<=num; i++)
    {
        printf("%d", a);
        c=a+b;
        a=b;
        b=c;
        printf("\n");
    }
    return 0;
}