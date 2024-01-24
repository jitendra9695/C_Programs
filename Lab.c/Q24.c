#include<stdio.h>
int main()
{
    int num, oct, rem, place;
    printf("enter a decimal number\n");
    scanf("%d", &num);
    printf("octal equivalent of %d is \n", num);
    oct=rem=0;
    place=1;
    while(num!=0)
    {
        rem= num%8;
        oct= oct+rem*place;
        num=num/8;
        place=place*10;
    }
    printf("%d\n", oct);
    return 0;
}