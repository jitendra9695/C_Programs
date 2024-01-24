#include<stdio.h>
int xlen(char str1[100]);
void rstr(char str1[100]);
void addstr(char str1[100], char str2[100]);
void compare(char str1[100], char str2[100]);
void palindrome(char str1[100]);
int main()
{
    char str1[100];
    char str2[100];
    printf("enter 1st string\n");
    gets(str1);
    printf("enter 2nd string\n");
    gets(str2);
    while(1)
    {
        printf("press 1 for length of a string \n");
        printf("press 2 for reverse of a string \n");
        printf("press 3 for concatinate two string \n");
        printf("press 4 for compare two given string \n");
        printf("press 5 for check given string is plindrome or not\n");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("length of a given string is %d", xlen(str1));
            break;
        case 2:
            rstr(str1);
            break;
        case 3:
            addstr(str1, str2);
            break;    
        case 4:
            compare(str1, str2);
            break;    
        case 5:
            palindrome(str1);
            break;    
        default:
            break;
        }
    }
    return 0;
}
int xlen(char str1[100])
{
    int i;
    for(i=0; str1[i]!='\0';i++);
    return(i);
}
void rstr(char str1[100])
{
    int len=xlen(str1);
    int i;
    len=len-1;
    char rev[100];
    for(i=0; len>=0; i++,len--)
    {
        rev[i]=str1[len];
    }
    rev[i]='\0';
    puts(rev);
    printf("\n");
}
void addstr( char str1[100], char str2[100])
{
    int i, len1, len2;
    len1= xlen(str1);
    len2= xlen(str2);
    for(i=0; i<=len2; i++)
    {
        str1[len1+i]=str2[i];
    }
    puts(str1);
}
void compare(char str1[100], char str2[100])
{
    int i, len1, len2;
    len1=xlen(str1);
    len2=xlen(str2);
    int flag=1;
    if(len1==len2)
    {
        printf("strings are equal \n");
        for(i=0; i<=len1; i++)
        {
            if(str1[i]==str2[i])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    else
    {
        flag=0;
        printf("strings are not equal \n");
    }
    if(flag==1)
    {
        printf("strings are same \n");
    }
    else
    {
        printf("strings are not same \n");
    }
}
void palindrome(char str1[100])
{
    int len1, count, i;
    count=0;
    len1=xlen(str1);
    char str2[100];
    len1=len1-1;
    for(i=0; len1>=0; i++,len1--)
    {
        str2[i]=str1[len1];
    }
    str2[i]='\0';
    puts(str2);
    for(len1=0; len1<=i; len1++)
    {
        if(str1[len1]==str2[len1])
        {
            count++;
        }
    }
    count=count-1;
    if(i==count)
    {
        printf(" string is palindrome \n");
    }
    else
    {
        printf("string is not palindrome \n");
    }
}