#include<stdio.h>
int main()
{         
    int daystomin = 1440;
    float first, solun;  
            printf("you chosed to convert days to minutes\n");
            printf("enter the value in terms of days :\n");
            scanf("%f", &first);
            solun= first*daystomin;
            printf("%f days is %f minutes \n", first, solun);
            return 0;
}            