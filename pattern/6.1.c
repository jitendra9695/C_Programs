#include<stdio.h>
#include<string.h>
int main()
{
    char a[]={'INDIA'};
    int len, i, j;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
}