#include <stdio.h>
int main()
{
    int a=1, b=2, c=3;
    a=b+c;
    printf("a=%d\n", a);
    printf("%d\n", c%b);
    printf("%d\n", -c%b);
    return 0;
}