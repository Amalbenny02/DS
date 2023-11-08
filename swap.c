#include<stdio.h>
void swap(int a,int b) 
{
int temp;
  printf("Before swapping, first number=%d\n "a);
  printf("Before swapping, second number=%d\n "b);
  
  temp = a;
  a = b;
  b = temp;
  
  printf("\nAfter swapping, first number = %.lf\n", a);
  printf("After swapping, second number = %.lf", b);
 
}
void main()
{
int first,second,temp;
printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);
}
