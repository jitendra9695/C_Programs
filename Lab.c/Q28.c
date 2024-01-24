#include<stdio.h>
int main()
{
    int i, j ;
    char ch ;
    for(i=1;i<=7;i++)
    {
        ch = 'A' ;
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
            {
            printf("%c",ch);
            j<=8-i?ch++:ch--;
            }
            else
            {
            printf(" ");
            if(j==7)
            ch--;
            }
        }
        printf("\n");
    }
    
    return 0;
}