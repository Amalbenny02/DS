#include<stdio.h>
void linearsearch(int array[],int n)
{
int i,search,flag=1;
printf("Enter element for search");
scanf("%d",&search);
for(i=0;i<n;i++)
  {
  if(array[i]==search)
    flag=0;
  }
  if(flag==0)
  printf("Element found at position:%d",i);
  else
  printf("Element not found\n");
}
void binarysearch(int arr[],int n)
{
int left=0;
int right=n-1;
int flag=1,search,mid;
printf("Enter element for search");
scanf("%d",&search);
while(left<=right)
{
    mid=(left+right)/2;
    if(arr[mid]==search)
       {
        flag=0;
        break;
       }
    if (arr[mid]>search)
            {
           
            right=mid-1;
            }
   
    if (arr[mid]<search)      
     {
             left=mid+1;
            }
}

  if(flag==0)
  printf("Element found at position %d",mid);
  else
  printf("Element not found\n");
}
               
int main()
{
int a[20],limit,i,j,choice,temp;
printf("Enter limit\n");
scanf("%d",&limit);
printf("Enter array elements\n");
for(i=0;i<limit;i++)
 scanf("%d",&a[i]);
 for(i=0;i<limit;i++)
 for(j=0;j<limit;j++)
  if(a[j+1]<a[j])
   {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
   }
 do{
 printf("\nMENU\n");
printf("1.Linear search\n");
printf("2.Binary search\n");
printf("3.Exit\n");
printf("\nEnter choice for search\n");
scanf("%d",&choice);
if(choice==1)
 linearsearch(a,limit);
if(choice==2)
 binarysearch(a,limit);
}
while (choice!=3);
return 0;
}
