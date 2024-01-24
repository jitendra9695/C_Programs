#include <stdio.h>
void square(int x);
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    square(n);
    return 0;
}
void square(int x)
{
    printf("%d", x*x);
}