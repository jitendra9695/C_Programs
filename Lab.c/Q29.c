#include<stdio.h>
int main()
{
    int num=4, i, j, spc, k=1;
    for(i=1;i<=4;i++)
    {
        for(spc=1;spc<=(4-i);spc++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d ", k++);
        }
        printf("\n");
    }
}