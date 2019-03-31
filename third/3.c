#include<stdio.h>
#include<string.h>
struct student
{
int roll_no;
char branch[100];
int marks;
} student1,student2,student3;
int main()
{
printf("Enter Student1 data\n");
printf("Roll no-");
scanf("%d",&student1.roll_no);
printf("Branch-");
scanf("%s",student1.branch);
printf("Marks-");
scanf("%d",&student1.marks);
printf("Enter Student3 data\n");
printf("Roll no-");
scanf("%d",&student2.roll_no);
printf("Branch-");
scanf("%s",student2.branch);
printf("Marks-");
scanf("%d",&student2.marks);
printf("Enter Student3 data\n");
printf("Roll no-");
scanf("%d",&student3.roll_no);
printf("Branch-");
scanf("%s",student3.branch);
printf("Marks-");
scanf("%d",&student3.marks);
branch();
marks();
return 0;
}
void branch()
{
printf("Roll no of student with branch cs-\n");
if(strcmp(student1.branch, "cs")==0)
printf("%d\n",student1.roll_no);
if(strcmp(student2.branch, "cs")==0)
printf("%d\n",student2.roll_no);
if(strcmp(student3.branch, "cs")==0)
printf("%d\n",student3.roll_no);
}
void marks()
{
int flag;
printf("Roll no of student with highest marks-\n");
if(student1.marks>student2.marks)
{
if(student2.marks>student3.marks)
flag=0;
else if(student1.marks>student3.marks)
flag=0;
else
flag=2;
}
else if(student2.marks>student3.marks)
flag=1;
else
flag=2;
if(flag==0)
printf("%d\n",student1.roll_no);
else if(flag==1)
printf("%d\n",student2.roll_no);
else
printf("%d\n",student3.roll_no);
}
