#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
struct node *head=0;
int count=0;
void trave_ll(struct node *temp);
void insert_ll(struct node *temp);
void delete_ll(struct node *temp);
void exit(int x);
void exit(int x)
{
    exit(x);
}
int main()
{
    int choice, a;
    while(choice)
    {
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("enter element \n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue (0,1) ? \n");
        scanf("%d", &choice);
    }
    while(1)
    {
        printf("press 1 for traversal in linked list \n");
        printf("press 2 for insertion in linked list \n");
        printf("press 3 for deletion in linked list \n");
        printf("press 4 for exit \n");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                 trave_ll(head);
               break;
            case 2:
                 insert_ll(head);
               break;
            case 3:
                 delete_ll(head);
               break;
            case 4:
                 exit(a);
               break;
        }

    }
}
void trave_ll(struct node *temp)
{
    count=0;
    temp=head;
    while(temp!=0)
    {
        printf("%d\t", temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    printf("%d elements in liked list \n", count);
}
void insert_ll(struct node *temp)
{
    int i=1, b, pos;
    struct node *newnode;
    while(1)
    {
        printf("press 1 for insert element from begining \n");
        printf("press 2 for insert element from end \n");
        printf("press 3 for insert element after a given position \n");
        printf("press 4 for exit from insertion \n");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                   newnode=(struct node*)malloc(sizeof(struct node));
                   printf("enter data you want to insert \n");
                   scanf("%d", &newnode->data);
                   newnode->next=head;
                   head=newnode;
                   printf("new linked list is :-\n");
                   trave_ll(head);
                break;
            case 2:
                   newnode=(struct node*)malloc(sizeof(struct node));
                   printf("enter data you want to insert \n");
                   scanf("%d", &newnode->data);
                   newnode->next=0;
                   temp=head;
                   while(temp->next!=0)
                   {
                    temp=temp->next;
                   }
                   temp->next=newnode;
                   printf("new linked list is :- \n");
                   trave_ll(head);
                break;
            case 3:
                   printf("given linked list is \n");
                   trave_ll(head);
                   printf(" enter the position after which you want to insert new element \n");
                   scanf("%d", &pos);
                   if(pos>count)
                   {
                      printf(" invalid position \n");
                   }
                   else
                   {
                    temp=head;
                    while(i<pos)
                    {
                        temp=temp->next;
                        i++;
                    }
                    newnode= (struct node*)malloc(sizeof(struct node));
                    printf("enter data \n");
                    scanf("%d", &newnode->data);
                    newnode->next=temp->next;
                    temp->next=newnode;
                   }
                   printf("new linked list is :- \n");
                   trave_ll(head);
                break;
            case 4:
                  exit(b);
                break;
        }
    }
}
void delete_ll(struct node *temp)
{
    int pos, c, i=1;
    struct node *prev_node, *next_node;
    while(1)
    {
        printf("press 1 for delete element from begining \n");
        printf("press 2 for delete element from end \n");
        printf("press 3 for delete element from specified position \n");
        printf("press 4 for exit from deletion \n");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                   if(head==0)
                   {
                      printf(" linked list is empty \n");
                   }
                   else
                   {
                      temp=head;
                      head=head->next;
                      free(temp);
                   }
                   printf("updated linked list is :-\n");
                   trave_ll(temp);
                break;
            case 2:
                   temp=head;
                   while(temp->next!=0)
                   {
                    prev_node=temp;
                    temp=temp->next;
                   }
                   if(temp==head)
                   {
                    head=0;
                   }
                   else
                   {
                    prev_node->next=0;
                   }
                   free(temp);
                   printf("updated linked list is \n");
                   trave_ll(head);
                break;
            case 3:
                   temp=head;
                   printf("given linked list is :- \n");
                   trave_ll(temp);
                   printf("enter position of element which you want to delete \n ");
                   scanf("%d", &pos);
                   if(pos>count)
                   {
                      printf("invalid position \n");
                   }
                   else
                   {
                      while(i<pos-1)
                      {
                         temp=temp->next;
                         i++;
                      }
                      next_node=temp->next;
                      temp->next=next_node->next;
                      free(next_node);
                      printf("updated linked list is :- \n");
                      trave_ll(head);
                   }
                break;   
            case 4:
                   exit(c);
                break;
        }
    }   
}