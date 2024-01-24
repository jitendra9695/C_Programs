#include<stdio.h>
void binary_search(int n, int a[n], int data);
int main()
{
    int i, n, data, a[n];
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
    printf("enter data you want search \n");
    scanf("%d", &data);
    binary_search(n,a,data);
    return 0;
}
void binary_search(int n, int a[n], int data)
{
    int f,r,mid;
    f=0; r=n-1;
    while(f<r)
    {
        mid=(f+r)/2;
        printf("\n%d\n", mid);
        if(data==a[mid])
         {
            printf("%d element is at %d index ", data, mid);
         break ;
         }  
        else if(data<a[mid])
          r=mid-1;
        else
          f=mid+1;
    }
}