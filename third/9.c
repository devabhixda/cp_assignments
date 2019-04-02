#include <stdio.h>
struct student
{
int roll_no;
char name[100];
int marks;
} student1,student2,student3;
int main()
{
char name[50];
int marks,i,n;
FILE *fptr;
fptr=(fopen("student.txt","a"));
printf("Enter Student1 data\n");
printf("Roll no-");
scanf("%d",&student1.roll_no);
printf("Name-");
scanf("%s",student1.name);
printf("Marks-");
scanf("%d",&student1.marks);
printf("Enter Student2 data\n");
printf("Roll no-");
scanf("%d",&student2.roll_no);
printf("Name-");
scanf("%s",student2.name);
printf("Marks-");
scanf("%d",&student2.marks);
printf("Enter Student3 data\n");
printf("Roll no-");
scanf("%d",&student3.roll_no);
printf("Name-");
scanf("%s",student3.name);
printf("Marks-");
scanf("%d",&student3.marks);
fprintf(fptr,"\nRoll_no: %d \nName: %s \nMarks=%d \n",student1.roll_no,student1.name,student1.marks);
fprintf(fptr,"\nRoll_no: %d \nName: %s \nMarks=%d \n",student2.roll_no,student2.name,student2.marks);
fprintf(fptr,"\nRoll_no: %d \nName: %s \nMarks=%d \n",student3.roll_no,student3.name,student3.marks);
fclose(fptr);
return 0;
}
