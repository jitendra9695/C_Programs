#include<stdio.h>
int main()
{
    int grade, grace, failed;
    printf("enter the class of student \n");
    scanf("%d", &grade);
    printf("enter the number of failed subject \n");
    scanf("%d", &failed);
    switch(grade)
    {
        case 1:
        if(failed>3)
            grace = 0;
        else
            grace = 5;
        break ;
        case 2:
        if(failed>2)
            grace = 0;
        else
            grace = 4;
        break ;
        case 3:
        if(failed>1)
            grace = 0;
        else
            grace = 5;
        break ;
        default : printf(" wrong class \n");     
    }
    if(grade == 1 || grade == 2 || grade== 3)
    {
        printf(" student has obtained a grace marks of %d per subject \n", grace);
    }
    return 0 ;
}