#include <stdio.h>
#define n 9
int main()
{
    int a[n][n],b[n][n],c[n][n],r1,r2,c1,c2,sum,i,j,k;
    printf("enter number of rows and columns for 1st matrix\n");
    scanf("%d %d", &r1, &c1);
    printf("enter 1st matrix \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter number of rows and columns for 2nd matrix\n");
    scanf("%d %d", &r2, &c2);
    printf("enter 2nd matrix \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st matrix is \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix is \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("multiplication of matrix\n");
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<r1;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]) ;
                }
                c[i][j]=sum;
            }
        }
    }
    else if(c1!=r2)
    {
        printf("multiplication not possible \n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}