#include <stdio.h>
int main()
{
    int n1, n2, lcm, fact=1;
    printf("enter 2 numbers \n");
    scanf("%d %d", &n1, &n2);
    lcm=(n1>n2)?n1:n2;
    while(fact!=0)
    {
        if(lcm%n1==0 && lcm%n2==0)
        {
            printf("LCM of%d and %d is %d \n", n1, n2, lcm);
            fact =0;
        }
        lcm++;
    }
    return 0;
}