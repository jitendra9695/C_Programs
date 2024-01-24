#include <stdio.h>
#include<string.h>
void del_the(char *line);
int main()
{
    char line[100];
    puts("enter the line \n");
    gets(line);
    del_the(line);
    puts("after removing all the words 'the' : \n\n");
    puts(line);
    return 0;
}
void del_the(char *line)
{
    int i, j;
    for(i=0; line[i]!='\0'; i++)
    {
        if(line[i]=='t'|| line[i]=='T'&& line[i]=='h'
        || line[i]=='H'&& line[i]=='e'|| line[i]=='E')
        {
            for(j=i; line[j]!='\0';j++)
            {
                line[j] = line[j+4];
            }
        }
    }
}