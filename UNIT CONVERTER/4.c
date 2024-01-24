#include <stdio.h>
int main()
{
    int n1, n2, x, y, hcf, lcm;
    printf("enter two numbers \n");
    scanf("%d %d", &n1, &n2);
    x=n1*n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else if(n2>n1)
        {
            n2=n2-n1;
        }
    }
    printf("hcf is = %d\n", n1);
    lcm=x/hcf;
    printf("lcm is =%d", lcm);
    return 0;
}