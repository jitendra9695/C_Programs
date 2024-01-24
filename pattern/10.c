#include<stdio.h>
int main()
{
    int i,j,spc,n,no,value=1;
    printf("enter the number of rows\n");
    scanf("%d",&no);
    n=no;
    for(i=1;i<=no;i++)
    {
        for(spc=1;spc<=n;spc++)
        {
            printf(" ");
        }
        n--;
        for(j=1;j<=i;j++)
        {
            printf("%d ",value++);
        }
        printf("\n");
    }
    return 0;
}