#include<stdio.h>
int main()
{
    int i =3;
    printf("value of i= %d\n", i);
    printf("address of i = %u\n", &i);
    printf("value of i= %d", *(&i));
    return 0 ;
}