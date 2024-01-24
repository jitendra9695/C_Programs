#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice, num, sum , i;
    char ch ;
    while( 1 )
 {
    printf("1. even/odd \n");
    printf("2. perfect number \n");
    printf("3. present in the given number \n");
    printf("4. vowel \n");
    printf("5. exit \n");
    printf(" your choice ? \n");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1: 
        printf(" enter the number : \n");
        scanf("%d", &num);
        if(num%2==0)
        {
            printf("even number \n");
        }
        else
        {
            printf(" odd number \n");
        }
        break;
        case 2:
        printf("enter the number \n");
        scanf("%d", &num);
        sum = 0;
        for(i=1; i<num; i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==num)
        {
            printf(" perfect number \n");
        }
        else
        {
            printf(" not perfect number \n");
        }
        break;
     case 4:
        printf("enter a character: \n");
       fflush(stdin);
        scanf("%c", &ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
           {
            printf(" vowel \n");
           }
        else
           {
            printf("consonant\n");
           }
        break;
     case 5:
        exit(0);
     default:
       printf(" invalid ");
    }
 }
 return 0;
}