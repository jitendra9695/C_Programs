#include<stdio.h>
#define MAX 50
typedef struct stack
{
    int data[MAX]; 
    int top;
}stack;
initial(stack *s)
{
    s->top=-1;
}
int full(stack *s)
{
    if(s->top==MAX-1)
    return 1;
    return 0;
}
int empty(stack *s)
{
    if(s->top==-1)
    return 1;
    return 0;
}
void push(stack *s, char str[MAX])
{
    int i=0;
    while(str[i]!='\0')
    {
        s->top=s->top+1;
        s->data[s->top]=str[i];
        i++;
    }
}
void pop(stack *s)
{
    printf(" \n reversed \n");
    while(s!='\0')
    {
        printf("%c", s->data[s->top]);
        s->top=s->top-1;
    }
}
int main()
{
    stack s;
    initial(&s);
    char str1[100] ;
    printf(" \n enter string \n ");
    gets(str1);
    printf("entered string is \n");
    puts(str1);
    return 0;
}
