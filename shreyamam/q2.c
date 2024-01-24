#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a ;
    a= (int *)malloc(20*sizeof(int));
    for(int i=0; i<20; i++)
    {
        printf("enter the %d element of an array\n", (i+1));
        scanf("%d", (a+i));
    }
    for(int i=0; i<20; i++)
    {
        printf("%d\n", *(a+i));
    }
    int x;
    printf(" enter the element to check in an array \n");
    scanf("%d", &x);
    if(x==*(a+x))
     {
         printf("given element is present in an array ");
     }
    else
    {
         printf("given element is not present in an array ");
    }
    return 0;
}