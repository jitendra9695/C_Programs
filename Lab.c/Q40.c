#include <stdio.h>
#include<string.h>
int main()
{
    char a[6][20]=
    {"jitendra",
     "raaj",
     "shilpa",
     "divyanshu",
     "raajan",
     "shilpi"
    };
    int i, j;
    char temp[10];
    printf("given array is \n");
    for(i=0;i<6;i++)
    {
        printf("%s\n",a[i]);
    }  
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    printf("\nsorted array is\n");
    for(i=0;i<6;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}