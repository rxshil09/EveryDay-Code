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

void year(int y, char s[100],int sy,int i);
void data(int rn,char n[100],int y,int sr,char d[100],char c[100]);

void main()
{
   stud s[2];
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

   printf("\n\n");
   
   int y;
   printf("Enter the particular Year of Joining :");
   scanf("%d", &y);
   printf("Students joined in year %d are:\n",y);
   for(int i=0;i<2;i++)
   year(y,s[i].name,s[i].year,i);
   
   printf("\n\n");
   
   int rn;
   printf("Enter Roll No. :");
   scanf("%d", &rn);
   printf("Students data of Roll no. %d is:\n",rn);
   for(int i=0;i<2;i++)
   data(rn,s[i].name,s[i].year,s[i].roll,s[i].depart,s[i].cour);
}

void year(int y,char s[100],int sy,int i)
{
    int c=0;
    if (sy==y)
    {
        printf("%s\n", s);
        c++;
    }
    else if(i==1 && c==0)
    printf("No Student joined.");
}

void data(int rn,char n[100],int y,int sr,char d[100],char c[100])
{
    if(rn==sr)
    {
        printf("Roll No. is %d\n", sr);
        printf("Name is %s\n", n);
        printf("Department is %s\n", d);
        printf("Course is %s\n", c);
        printf("Year of Joining is %d\n", y);
    }
}
