//Create a structure called student that contain the data given below:
// Roll number, Name, Department, Course, Year of joining.
//         	Assume that there are 2 students.
// (1)	Write a function to print names of the students who joined in a particular year.
// (2)	Write a function to print the data of student whose roll number is received by the function.

#include<stdio.h>
#include<string.h>
typedef struct student
{
   int roll;
   char name[100];
   char depart[100];
   char cour[100];
   int year;
}stud;

void year(int y, char s[100],int sy);
void roll(int r);

void main()
{
   static stud s[2];//= {"0001" , "Ravi Kumar" , "Technical" , "Software eng." , "2020"};
   //stud s2 = {"0002" , "Srashti Goyal" , "Mdeical" , "Dentist" , "2018"};
   for(int i = 0 ;i < 2 ;i++)
   {
      printf("Enter Roll No. of student %d: \n",i+1);
      scanf("%d",&s[i].roll);
      printf("Enter Name of student %d :\n",i+1);
      scanf("%s",&s[i].name);
      printf("Enter Department of student %d: \n",i+1);
      scanf("%s",&s[i].depart);
      printf("Enter Course of student %d: \n",i+1);
      scanf("%s",&s[i].cour);
      printf("Enter year of joining student %d: \n",i+1);
      scanf("%d",&s[i].year);
   }

   int y;
   printf("Enter the particular Year of Joining :");
   scanf("%d", &y);
   printf("Students joined in year %d are:\n",y);
   for(int i=0;i<2;i++)
   year(y,s[i].name,s[i].year);
}

void year(int y,char s[100],int sy)
{
   if (sy==y)
   printf("%s", s);
}
