#include<stdio.h>
int main()
{
    int i, j;
    char a[]={'I','N','D','I','A'};
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}