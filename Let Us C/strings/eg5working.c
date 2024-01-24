#include <stdio.h>
int xstrlen(char *);
int main()
{
    char arr[]="Bamboozled";
    int len1, len2;
    len1=xstrlen(arr);
    len2=xstrlen("humpty sharma ki dulhaniya");
    printf("string = %s length = %d\n",arr, len1);
    printf("len");
    return 0;
}
int xstrlen(char *s)
{
    int length=0;
    while(*s!='\0')
    {
        length++;
        s++;
    }
    return(length) ;
}