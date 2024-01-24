#include<stdio.h>
int main()
{
    int marks[4];
    for(int i=0; i<4; i++)
    {
        printf("enter the value of an %d element of an array  \n", i);
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<4; i++)
    {
        printf(" the value of %d element of an array is %d\n", i, marks[i]);
    }
    return 0;
}