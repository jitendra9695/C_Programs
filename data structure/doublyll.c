#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *tail, *newnode, *temp, *tail;
struct node *head=0;
int count;
void trave_dll(struct node *temp);
void insertion_dll(struct node *temp);
int main()
{
    int choice;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter element \n");
        scanf("%d", &newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("do you want to continue to enter element (0.1)\n");
        scanf("%d", &choice);
    }
    while(1)
    {
        printf("press 1 for traversal in doubly linked list \n");
        printf("press 2 for insertion in doubly linked list \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                   trave_dll(head);
                   break;
            case 2:
                   insertion_dll(head);
                   break;       
        }
    }
    return 0;
}
void trave_dll(struct node *temp)
{
    count=0;
    temp=head;
    while(temp!=0)
    {
        printf("%d  ", temp->data);
        temp=temp->next;
        count++;
    }
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    tail=temp;
    printf(" \n tail=%d ", tail->data);
    printf("\n");
    printf("%d elements in doubly linked list \n", count);
}
void insertion_dll(struct node *temp)
{
    int choice, pos, i=1;
    while(1)
    {
      ("press 1 for insertion at begining \n");
        printf("press 2 for insertion from end \n");
        printf("press 3 for insertion at position which you want \n");
        printf("press 4 for insertion after position which you want \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("list is \n");
            trave_dll(head);
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter data \n");
            scanf("%d", &newnode->data);
            newnode->prev=0;
            if(head==0)
            {
                head=temp=newnode;
            }
            else
            {
                head->prev=newnode;
                newnode->next=head;
                head=newnode;
            }
            printf("list after insertion \n");
            trave_dll(head);
           break;
        case 2:
            printf("list is \n");
            trave_dll(head);
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("enter data \n");
            scanf("%d", newnode->data);
            newnode->next=0;
            newnode->prev=0;
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
            printf("list after insertion \n");
            trave_dll(head);
           break;
        case 3:
            printf("list is \n");
            trave_dll(head);
            printf("enter position where you want to insert a new element \n");
            scanf("%d", &pos);
            if(pos>count)
            {
                printf("invalid position \n"); 
            }
            else
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                temp=head;
                printf("enter data \n");
                scanf("%d", &newnode->data);
                while(i<pos-1)
                {
                    temp=temp->next;
                    i++;
                }
                newnode->prev=temp;
                newnode->next=temp->next;
                temp->next=newnode;
                newnode->next->prev=newnode;
            }
            printf("list after insertion \n");
            trave_dll(head);
           break;
        default:
            break;
        }
    }   
}