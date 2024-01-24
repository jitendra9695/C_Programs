#include<stdio.h>
int main()
{
    int ag1, ag2, ag3;
    printf(" enter the age ");
    scanf(" %d %d %d", &ag1, &ag2, &ag3);
    if( ag1<ag2 && ag1<ag3)
    {
        printf(" ag1 is the youngest person ");
    }
    else if( ag2<ag1 && ag2<ag3)
    {
        printf(" ag2 is the youngest person ");
    }
    else if( ag3<ag1 && ag3<ag2)
    {
        printf(" age 3 is the youngest person ");
    }
    else if( ag1== ag2== ag3)
    {
        printf(" all are in same age ");
    }
    
    return 0;
}