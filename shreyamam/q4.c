#include <stdio.h>
int main()
{
    int a[4][6];
    int i, j, sum=0 ;
    for(i=0; i<4; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("enter the %d,%d element in an array \n", i, j);
            scanf("%d",&a[i][j] );
        }
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<6; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<6; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("sum of all element in an array = %d\n", sum);
    printf("\n transpose of matrix is : \n");
    for(i=0; i<6; i++)
    {
        for(j=0; j<4; j++)
        {
            printf(" %d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}