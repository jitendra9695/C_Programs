#include<stdio.h>
int main()
{
    int a[8][6];
    int i, j ;
    printf("enter 54 element of an array \n");
    for (int i=0; i<8; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("enter %d %d element of an array ", i, j);
            scanf("%d  ",&a[i][j]);
        }
    }
    for (int i=0; i<8; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0,j=0; i<8, j<6; i++, j++)
    {
       if(i%2==0 || j%2==0)
       {
           int sum=0 ;
           sum = sum +a[i][j]  ;
           printf(" sum of even array %d ", sum) ;
       }
    }
    return 0;
}