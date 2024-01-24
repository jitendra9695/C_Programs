#include<stdio.h>
void swap (int *, int *);
int main()
{
    int a, b;
    printf("enter any two numbers \n");
    scanf("%d %d", &a, &b);
    printf("a=%d b=%d\n", a, b);
    swap(&a, &b);
    return 0 ;
}
void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("new value of a=%d b=%d",*x, *y);
}
