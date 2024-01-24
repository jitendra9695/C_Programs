#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *link;
};
struct stack *top=0;
void push(int x);
void pop(int x);
void peek(int x);
void display(int x); 
int main()
{
    int ch, a ;
    do
    {
        printf(" \n 1.push 2.pop 3.top 4.display \n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                push(top);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                peek(top);
                break;
            case 4:
                display(top);
                break;
            default :
                 printf("invalid choice \n");
        }
    } while (ch!=0);
    return 0;
}
void push(int x)
{
    int a;
    printf("enter data \n");
    scanf("%d", &a);
    struct stack *newnode;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
    printf("newnode %d ", newnode->data);
    printf("top %d ", top->data);
}
void display(int x)
{
    struct stack *temp;
    temp=top;
    if(top==0)
    {
        printf("empty stack \n");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d ", temp->data);
            temp=temp->link;
        }
    }
}
void peek(int x)
{
    if(top==0)
    {
        printf("empty stack \n");
    }
    else
    {
        printf(" top element is %d \n", top->data);
    }
}
void pop(int x)
{
    struct stack *temp;
    temp=top;
    if(top==0)
    {
        printf("empty stack - underflow condition \n");
    }
    else
    {
        printf("popped element is %d \n", top->data);
        top=top->link;
        free(temp);
    }
}