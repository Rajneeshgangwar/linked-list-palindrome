#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdbool.h>

struct node
{
    int info;
    struct node *link;
};
struct node *head;
void CreateNode()
{
    int data,i;
    printf("\nEnter the element");

    struct node *q,*newnode=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&data);
        if(head==NULL)
        {
           newnode->info=data;
           newnode->link=NULL;
           q=head=newnode;
        }
        else
         {
             newnode->info=data;
             newnode->link=NULL;
             q->link=newnode;
             q=newnode;
         }


}
void To_check_palindrome()
      {
         struct node *prevnode,*temp,*nextnode;
     prevnode=0;
     temp=nextnode=head;
     while(nextnode!=NULL)
     {
         nextnode=nextnode->link;
         temp->link=prevnode;
         prevnode=temp;
         temp=nextnode;
     }
     struct node *headR;
     headR=prevnode;
     bool flag=true;
      while(head!=NULL&&headR!=NULL)
      {
          if(head->info!=headR->info)
          {
              flag=false;
              break;
          }
          head=head->link;
          headR-headR->link;
      }
      if(flag)
        printf("\nThe list is palindrome");
      else
        printf("\nThe list is not palindrome");


}
void display()
      {
          struct node *q;
          q=head;
          printf("The list is......");
          while(q!=NULL)
          {
              printf("\n%d",q->info);
              q=q->link;
          }
      }
void main()
{
    int i;
    int size,count=0;
        printf("\nEnter the size of the list");
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            if(count<size)
        {
            CreateNode();
            count++;
        }
        else
            printf("overflow condition");
        }
        display();
        To_check_palindrome();


}




