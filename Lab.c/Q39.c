#include <stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("enter any number \n");
    scanf("%d",&num);
    printf("factorial of %d is %d",num, fact(num));
    return 0;
}
int fact(int num)
{
    if(num!=0)
    {
        return(num*fact(num-1));
    }
    else
    {
        return(1);
    }
}