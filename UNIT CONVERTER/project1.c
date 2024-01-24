#include <stdio.h>
int main()
{
    char choice, start;
    float inchestometer = 0.0254;
    float poundtokgs = 0.453;
    float kmstomiles = 0.621;
    float inchestofoot = 0.083;
    float cmstoinches = 0.393;
    float radtodeg = 57.295;
    float mintohours = 0.016;
    float daystomin = 1440.000;
    float first, solun;
    printf("WELCOME TO MY UNITCONVERTER \n");
    printf("if you want to start then press 's' \n");
    scanf("%c", &start);
  while(1)
  {
    if (start == 's')
    {
        printf("thanks for start this calculator \n\n");
        printf(" 1.inchestometer\n 2.poundtokgs\n 3.kmstomiles\n 4.inchestofoot\n 5.cmstoinnches\n 6.fahrenheit to celcius\n 7.celciustofahrenheit\n 8.radiantodegree\n 9.mintohours\n 10.daystomin\n");
        scanf("%d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("you chosed inches to meter \n");
            printf("enter the value in terms of (inches) unit :\n");
            scanf("%f", &first);
            solun= first * inchestometer;
            printf("%f inches is equal to %f meter \n", first, solun);
            break;
        case 2:
            printf("you chosed pound to kgs \n");
            printf("enter the value in terms of (pound) unit :\n");
            scanf("%f", &first);
            solun= first * poundtokgs;
            printf("%f pound is equal to %f kgs \n", first, solun);
            break;
        case 3:
            printf("you chosed kilometer to miles \n");
            printf("enter the value in terms of (kilometer) unit :\n");
            scanf("%f", &first);
            solun= first * kmstomiles;
            printf("%f kilometer is equal to %f miles \n", first, solun);
            break;
        case 4:
            printf("you chosed inches to foot \n");
            printf("enter the value in terms of (inches) unit :\n");
            scanf("%f", &first);
            solun= first * inchestofoot;
            printf("%f inches is equal to %f foot \n", first, solun);
            break;
        case 5:
            printf("you chosed centimeter to inches \n");
            printf("enter the value in terms of (centimeter) unit :\n");
            scanf("%f", &first);
            solun= first * cmstoinches;
            printf("%f centimeter is equal to %f inches \n", first, solun);
            break; 
        case  6:
            printf("you chosed to convert fahrenheit to celcius \n");
            printf("enter the value in terms of (fahrenheit) unit :\n");
            scanf("%f", &first);
            solun= (first-32)*5/9;
            printf("%f fahrenheit is %f degree celcius \n", first, solun);
            break; 
        case  7:
            printf("you chosed to convert celcius to fahrenheit \n");
            printf("enter the value in terms of (celcius) unit :\n");
            scanf("%f", &first);
            solun= first*9/5+32;
            printf("%f degree celcius is %f fahrenheit\n", first, solun);
            break;                                       
        case  8:
            printf("you chosed to convert radian to degree\n");
            printf("enter the value in terms of (radian) unit :\n");
            scanf("%f", &first);
            solun= first*radtodeg;
            printf("%f radian is %f degree \n", first, solun);
            break;
         case  9:
            printf("you chosed to convert minutes to hours\n");
            printf("enter the value in terms of minutes :\n");
            scanf("%f", &first);
            solun= first*mintohours;
            printf("%f minutes is %f hours \n", first, solun);
            break;
         case  10:
            printf("you chosed to convert days to minutes\n");
            printf("enter the value in terms of days :\n");
            scanf("%f", &first);
            solun= first*daystomin;
            printf("%f days is %f minutes \n", first, solun);
            break;    
        default:
            break;
    
        }
    }
    else
    {
        printf("Quitting the program.....\n");
    }
 }
    
    return 0;
}