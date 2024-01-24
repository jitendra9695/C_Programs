#include<stdio.h>
int main()
{
    int marks[3][4]={{23, 45, 56, 67},{32, 43, 54, 76},{12, 45, 67, 89}};
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
         printf("%d ", marks[i][j]);
        }
    printf("\n");
    }
    return 0;
}