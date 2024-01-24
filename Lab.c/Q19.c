#include<stdio.h>
int main()
{
    float weight   ;
    printf(" enter the weight pounds ");
    scanf("%f", &weight);
    if( weight>= 190)
    {
        printf(" boxer class is Heavy Weight ");
    }
    else if( weight>=154 && weight<= 189)
    {
        printf(" boxer class is middle weight ");
    }
    else if( weight >=122 && weight <=153)
    {
        printf(" boxer class is feather weight ");
    }
    else if ( weight >=115 && weight <= 121)
    {
    printf(" boxer class is bantam weight ");
    }
    else
    {
    printf(" boxer class is flyweight ");
    }
}