#include<stdio.h>
void arraysort(int array[],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  if(array[j+1]<array[j])
   {
   temp=array[j];
   array[j]=array[j+1];
   array[j+1]=temp;
   }
printf("\nArray after sorting:");
for(i=0;i<n;i++)
 {
 printf("\t%d",array[i]);
 }
}
void main()
{
int a[20],i,limit;

arraysort(a,limit);
}


   
