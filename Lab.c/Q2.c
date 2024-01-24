
#include<stdio.h>
int main()
{
    float km,m,inches,feet;
    printf(" enter the distance in kilometer= ");
    scanf("%f", &km);
    m=1000*km;
    inches=2.54/100000;
    feet=inches/12;
    printf("distance in meter=%f\n", m);
    printf("distance in inches=%f\n", inches);
    printf("distance in feet=%f\n", feet);
    return 0;
}