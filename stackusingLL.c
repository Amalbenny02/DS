/*To implement a menu driven program to perform
following stack operations using linked list
i. push
ii. pop
iii.Traversal
*/


#include<stdio.h>
#include<stdlib.h>
struct node
{
int value;
struct node*next;
}*top=NULL,*ptr=NULL,*temp;

void push(int item)
{
  temp=malloc(sizeof(struct node));
  temp->value=item;
  if(top==NULL)
  {
  temp->next=top;
  top=temp;
  }
  else
  {
  temp->next=top;
  top=temp;
  }
  printf("node is inserted\n");
  }
  
  
void pop( int item)
{
if(top==NULL)
 {
  printf("under flow");
 } 
 ptr=top;
 top=top->next;
 free(ptr);
} 
void traversal()
{
ptr=top;
if(ptr==NULL)
{
printf("linked list is empty");
}
printf("traverse result=");

while(ptr!=NULL){

printf("%d->",ptr->value);
ptr=ptr->next;
}
printf("NULL");
}
 
void main()
{
int ch,item;
struct node *first=NULL;
struct node *second=NULL;
first=malloc(sizeof(struct node));
second=malloc(sizeof(struct node));
 first->value=10;
 second->value=20;
 first->next=second;
 second->next=NULL;
 top=first;
 do
 {
  printf("\n1.insertfront\n2.deletion\n3.Traversal\n4.Exit\n enter your choice");
  scanf("%d",&ch);
  if(ch==1)
  {
         printf("enter item");
         scanf("%d",&item);
         push(item);
  }
  if(ch==2)
  {
      pop(item);
  }
  if(ch==3)
  {
       traversal();
  }
  
  
 }
 while(ch!=4);
 }
