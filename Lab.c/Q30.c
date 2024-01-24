#include<stdio.h>
int main()
{
    int i, j, k, num_rows, value ;
    printf(" enter the number of rows \n");
    scanf("%d", &num_rows);
    for(i=0;i<=num_rows;i++)
    {
        for(j=0;j<=(num_rows-i); j++)
        {
            printf(" ");
        }
        value=1;
        for(k=0;k<=i;k++)
        {
            printf(" %d", value);
            value=(value*(i-k))/(k+1);
        }
        printf("\n");
    }
    return 0;
}