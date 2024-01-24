#include<stdio.h>
void swap(int x, int y);
int main()
{
    int a, b;
    printf("enter any two numbers\n");
    scanf("%d %d", &a, &b);//modified
    printf("a=%d b=%d\n", a, b);//modified
    swap(a, b);
    return 0;
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d\n", x, y);
}