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
void createlist()
{
    int c,ch;
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
}
int length()
{ struct node *temp;
    int k=0;
    temp=head;
    while(temp!=NULL)
    {   k++;
        temp=temp->next;
    }
    return k;
}
void del_beg()
{ struct node *temp1;
  temp1=head;
  if(head->next==NULL)
  {
      head=NULL;
      free(temp1);
  }
  else
  {
      head=head->next;
      free(temp1);
  }
}
void del_end()
{ struct node *prevnode;
  temp=head;
  while(temp->next!=NULL)
  {
      prevnode=temp;
      temp=temp->next;
  }
    if(temp==head)
    {
        head=NULL;
    }
    else
    {
        prevnode->next=NULL;
    }
    free(temp);
}
void del_mid()
{ struct node *nextnode;
  int i,j=1,len;
  temp=head;
  printf("Enter position from where node is to be deleted:\n");
  scanf("%d",&i);
 len=length();
  if(i==1)
  del_beg();
  else if(i==len)
  del_end();
  else if(i>len)
  printf("Invalid position!");
  else
  {
    while(j<(i-1))
    {
        temp =temp->next;
        j++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
  }
  
}
int main()
{  int c1,ch1;
   createlist();
    do{
        printf("Select where you want to delete node:\n 1. beginning\t2. End\t 3.middle\n");
    scanf("%d",&c1);
    switch(c1)
    {
        case 1: del_beg();
                break;
        case 2: del_end();
                break;
        case 3: del_mid();
                break;
        default: printf("invalid choice!");
    }
    printf("Want to delete more nodes?(1/0)\n");
    scanf("%d",&ch1);
    } while(ch1==1);
    printf("The Updated Linked list is:\n");
    display();
    return 0;
}
