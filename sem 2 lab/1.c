#include <stdio.h>
#include <stdlib.h>
void diag(int arr[4][4]);
void transpose(int arr[4][4]);
void multiply(int a[4][4], int b[4][4]);
void sparse(int a[4][4]);
void exit(int x);
int main()
{
    int a[4][4];
    int b[4][4];
    int i, j;
    printf("enter the 1st matrix 3x3 \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the 2nd 3x3 matrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    while (1)
    {
        printf("press 1 for diagonal of a matrix\n");
        printf("press 2 for transpose of a matrix\n");
        printf("press 3 for multiplication of a matrix\n");
        printf("press 4 for sparse of a matrix\n");
        printf("press 5 for exit \n");
        printf("your choice ? \n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            diag(a);
            diag(b);
            break;
        case 2:
            transpose(a);
            transpose(b);
            break;
        case 3:
            multiply(a,b);
            break;
        case 4:
            sparse(a);
            sparse(b);
            break;  
        case 5:
            int a;
            exit(a);    
        default:
            printf("wrong number \n");
        }
    }
    return 0;
}
void exit(int x)
{
    exit(x);
}
void multiply(int a[4][4],int b[4][4] )
{
    int i, j, k, sum;
    int c[4][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
void transpose(int arr[4][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}
void diag(int arr[4][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\t", arr[i][j]);
            }
        }
    }
}
void sparse(int a[4][4])
{
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>=5)
    {
        printf("sparse matrix \n");
        printf("represtation of sparse matrix \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a[i][j]!=0)
                {
                    printf("%d %d %d \n", i ,j ,a[i][j]);
                }
            }
        }
    }
    else
    {
        printf("not sparse \n");
    }
}