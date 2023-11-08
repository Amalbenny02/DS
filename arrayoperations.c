#include<stdio.h>
void main()
{
int array[10],n,pos,i,element,k;
printf("Enter the limit:\n");
scanf("%d",&n);
printf("Enter the elements to the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
int ch;
printf("1.Insertion\n2.Deletion\n3.Traversal\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("Enter the position to insert the element:\n");
scanf("%d",&pos);
pos=pos-1;
printf("Enter the element to be inserted:\n");
scanf("%d",&element);
if(n==10)
{
printf("Array overflow!");
}
else{
for(i=n-1;i>=pos;i--)
array[i+1]=array[i];
array[pos]=element;
printf("The array elements are:\n");
for(i=0;i<n+1;i++)
{
printf("%d\t",array[i]);
}
}
break;
}
case 2:
{
printf("\nEnter the position of the element to be deleted:\n");
scanf("%d",&k);
k=k-1;
for(i=k;i<n;i++)
{
array[i]=array[i+1];
}
n=n-1;
printf("The array after deletion:\n");
for(i=0;i<n+1;i++){
printf("%d\t",array[i]);
}
break;
}
case 3:
{
for(i=0;i<n;i++)
{
printf("%d",array[i]);
}
break;
}
}
}
