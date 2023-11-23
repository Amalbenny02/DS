#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int info;
    struct node* next;
};
 
struct node* last = NULL;
 

void insertAtFront(int data)
{
   
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
   
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 
 
    else {
        temp->info = data;
        temp->next = last->next;
 
        // last node now has reference
        // of the new node temp
        last->next = temp;
    }
}

void addatlast(int data)
{
    // Initialize a new node
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    // If the new node is the
    // only node in the list
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 
    // Else the new node will be the
    // last node and will contain
    // the reference of head node
    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
// Function to print the list
void viewList()
{
    // If list is empty
    if (last == NULL)
        printf("\nList is empty\n");
 
    // Else print the list
    else {
        struct node* temp;
        temp = last->next;
 
        // While first node is not
        // reached again, print,
        // since the list is circular
        do {
            printf("\nData = %d", temp->info);
            temp = temp->next;
        } while (temp != last->next);
    }
}
 
// Driver Code
int main()
{
    int ch,n;
    do
    {
    printf("\n1.insertion at front\n2.Insertion at last\n3.Display\n4.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    if(ch==1)
    {
     printf("Enter element to inserted: ");
     scanf("%d",&n);
     insertAtFront(n);
    }
    if(ch==2)
    {
     printf("Enter element to inserted: ");
     scanf("%d",&n);
     addatlast(n);
    }
    if(ch==3)
    {
      viewList();
    }
    ch++;
    }while(ch<=4);
   
   
 
    return 0;
}
