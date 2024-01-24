//function to print HELLO 
#include <stdio.h>
void hello();
int main()
{
    hello();
    hello();
    hello();
    for(int i=1; i<10; i++)
    {
        hello();
    }
    return 0;
}
void hello()
{
    printf("hello\n");
}