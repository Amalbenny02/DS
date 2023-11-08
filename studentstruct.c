#include<stdio.h>
struct student
{
int rollno;
float arr marks[5];
};
int main()
{
struct student student1;
printf("enter roll no of student 1:\n");
scanf("%d",&student1.rollno);
printf("Enter student 1 marks in 5 subjects:\n");
for(int i=0;i<5;i++)
scanf("%f",&student1.marks[i]);
printf("Student Rollno=%d\n",student1.rollno);
for(int i=0;i<5;i++)

printf("Student Marks=%f\n",student1.marks[i]);
}
