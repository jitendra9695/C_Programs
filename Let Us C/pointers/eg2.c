#include<stdio.h>
int main()
{
    int i= 3;
    int *j;
    j=&i;
    printf("address of i = %u\n",&i);
    printf("address of i = %u\n",j);
    printf("address of j = %u\n",&j);
    printf("value of j = %u\n",j);
    printf("value of i= %d\n", i);
    printf("value of i= %d\n", *j);
    printf("value of i= %d\n", *(&i));
    return 0;
}