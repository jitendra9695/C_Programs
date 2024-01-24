#include<stdio.h>
void roman(int );
int main()
{
    int year ;
    printf("enter a year \n");
    scanf("%d", &year);
    roman(year);
}
void roman (int num)
{
    while(num!=0)
    {
      if(num>=1000)
       {
         printf("M");
         num=num-1000;
       }
       else if(num>=500)
       {
         printf("D");
         num=num-500;
       }
       else if (num>=100)
       {
         printf("C");
         num=num-100;
       }
       else if (num>=50)
       {
         printf("L");
         num=num-50;
       }
       else if (num>=10)
       {
         printf("X");
         num=num-10;
       }
       else if (num>=5)
       {
         printf("V");
         num=num-5;
       }
       else if (num>=1)
       {
           printf("I");
           num=num-1;
       }
    }   
}