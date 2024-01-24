#include<stdio.h>
#include<stdlib.h>
int main()
{
    int min, max, range, lim, num;
    printf(" enter the limit\n");
    scanf("%d", &lim);
    printf(" enter %d numbers \n", lim);
    scanf("%d", &num);
    max=min=num;
    lim = lim-1;
    while(lim)
    {
        scanf("%d", &num);
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
        lim--;
    }
    range= max - min;
    printf("min=%d\n max=%d\n", min, max);
    printf("range is %d \n", abs(range));
    return 0;
}