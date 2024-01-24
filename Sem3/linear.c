#include<stdio.h>
int main()
{
    int i, n, data;
    int a[n];
    printf("enter size of an array \n");
    scanf("%d", &n);
    printf("enter elements in an array \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("enter the element which you want to search in an array \n");
    scanf("%d", &data);
    for(i=0; i<n; i++)
    {
        if(data==a[i])
        {
            printf("%d element found at index %d /n", data, i);
            break;
        }
    }
}