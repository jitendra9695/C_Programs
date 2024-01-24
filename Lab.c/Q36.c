#include<stdio.h>
void prime(int);
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);
    prime(num);
    return 0 ;
}
void prime(int num)
{
    for(int i=2; num>1; i++)
    {
        while(num%i==0)
        {
            printf("%d ", i);
            num=num/i;
        }
    }
}