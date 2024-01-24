#include<stdio.h>
#include<math.h>
void stats(int*, float*, float*);
int main()
{
    int sum;
    float avg, stdev ;
    stats(&sum, &avg, &stdev);
    printf("%d %f %f", sum, avg, stdev);
    return 0;
}
void stats(int *sum, float *avg, float *stdev)
{
    int n1, n2, n3, n4, n5 ;
    printf("enter any 5 numbers \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    *sum = n1+n2+n3+n4+n5;
    *avg= *sum/5;
    *stdev= sqrt((pow((n1-*avg),2)+pow((n2-*avg),2)+pow((n3-*avg),2)+pow((n4-*avg),2)+pow((n5-*avg),2))/4);
}