#include<stdio.h>
int main()
{
    float centigrade, fahrenheit;
    printf(" city temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    centigrade=(fahrenheit-32)*5/9;
    printf(" city temperature in centigrade=%f", centigrade);
    return 0;
}