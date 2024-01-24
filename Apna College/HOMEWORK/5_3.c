#include <stdio.h>
void hc(float x);
int main()
{
    float temp;
    while(1)
    {
      printf("enter temperature\n");
      scanf("%f",&temp);
      hc(temp);
    }  
      return 0;
}
void hc(float x)
{
    if(x<=22)
    {
        printf("cold\n");
    }
    else
    {
        printf("hot\n");
    }
}