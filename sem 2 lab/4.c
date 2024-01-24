#include<stdio.h>
#define MAX 5
struct stack
{
    int data[MAX];
    int top;
};
void initial(struct stack *s);
void push(struct stack *s);
void pop(struct stack *s);
void peek(struct stack *s);
void display(struct stack *s);
void initial(struct stack *s)
{
    s->top=-1;
}
int main() 
{
   struct stack s;
    initial(&s);
    int ch=1;
    do
    {
        printf("enter choice: 1:push \n 2:pop \n 3:peek \n 4:display \n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                  push(&s);
                  break;
            case 2:
                  pop(&s);
                  break;
            case 3:
                  peek(&s);
                  break;
            case 4:
                  display(&s);
                  break;
            default:
                   printf("invalid choice \n");
        }
    } while (ch!=0); 
    return 0;
}
void push(struct stack *s)
{
    int x;
    printf("enter data \n");
    scanf("%d", &x);
    if(s->top==MAX-1)
    {
        printf("overflow condition \n");
    }
    else
    {
       s->top=s->top+1;
        s->data[s->top]=x;
    }
}
void pop(struct stack *s)
{
    int item;
    if(s->top==-1)
    {
        printf("underflow condition \n");
    }
    else
    {
        item=s->data[s->top];
        s->top=s->top-1;
        printf("popped item is %d \n", item);
    }
}
void peek(struct stack *s)
{
    if(s->top==-1)
    {
        printf("stacks is empty \n");
    }
    else
    {
        printf(" %d ", s->data[s->top]);
    }
}
void display(struct stack *s)
{
    int i;
    for(i=s->top; i>=0;i--)
    {
        printf(" %d \t", s->data[i]);
    }
}