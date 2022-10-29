#include <stdlib.h>
#include <stdio.h>
struct node
{
    int info;
    struct node *next;
};
struct node * head, *temp;
void beg()
{ struct node *ptr;
    ptr=(struct node*) malloc (sizeof(struct node));
    printf("Enter data :\n");
    scanf("%d",&ptr->info);
    ptr->next=head;
    head=ptr;
}
void end()
{ struct node *ptr;
    ptr=(struct node*) malloc (sizeof(struct node));
    printf("Enter data :\n");
    scanf("%d",&ptr->info);
    ptr->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
void mid()
{
    struct node *ptr;
    int pos,i=1;
    printf("Enter the position of node after which you want to insert node\n");
    scanf("%d",&pos);
    ptr=(struct node*) malloc (sizeof(struct node));
        temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("Enter data\n");
    scanf("%d",&ptr->info);
    ptr->next=temp->next;
    temp->next=ptr;
}
void display()
{ 
while(head!=NULL)
{
    printf("\t %d",head->info);
    head=head->next;
}
    
}
int main()
{  int c,ch;
    do{
        printf("Select where you want to insert node:\n 1. beginning\t2. End\t 3.middle\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: beg();
                break;
        case 2: end();
                break;
        case 3: mid();
                break;
        default: printf("invalid choice!");
    }
    printf("Want to insert more nodes?(1/0)\n");
    scanf("%d",&ch);
    } while(ch==1);
   
    printf("The Linked list is:\n");
    display();
    return 0;
}
