// 19/01/22
#include<stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf(" enter the cost price and selling price : ");
    scanf("%f %f", &cp, &sp);
    profit= sp-cp;
    loss= cp-sp;
    if ( profit > 0)
    printf(" the profit is %f", profit);
    if( loss>0)
    printf(" the loss is %f", loss);
    if ( loss==0)
    printf(" there is no profit, no loss");
    return 0;
}