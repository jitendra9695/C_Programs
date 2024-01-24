//TERNARY OPERATOR
#include <stdio.h>
int main()
{
    int age;
    printf("enter age \n");
    scanf("%d",&age);
     
    age>18?printf("adult\n"):printf("not adult \n");

    int number, luckynumber;
    printf("enter number and lucky number \n");
    scanf("%d %d", &number, &luckynumber);

     number==luckynumber?printf("you are lucky"):printf("you are not lucky \n"); 
    return 0;
}