#include<stdio.h>
#include<string.h>
struct emp
{
int emp_id;
char name[100];
int salary;
} emp1,emp2,emp3;
int main()
{
printf("Enter emp1 data");
scanf("%d",&emp1.emp_id);
scanf("%s",emp1.name);
scanf("%d",&emp1.salary);
printf("Enter emp2 data");
scanf("%d",&emp2.emp_id);
scanf("%s",emp2.name);
scanf("%d",&emp2.salary);
printf("Enter emp3 data");
scanf("%d",&emp3.emp_id);
scanf("%s",emp3.name);
scanf("%d",&emp3.salary);
salary();
name();
return 0;
}
void salary()
{
int flag;
printf("emp_id of employee with highest salary-\n");
if(emp1.salary>emp2.salary)
{
if(emp2.salary>emp3.salary)
flag=0;
else if(emp1.salary>emp3.salary)
flag=0;
else
flag=2;
}
else if(emp2.salary>emp3.salary)
flag=1;
else
flag=2;
if(flag==0)
printf("%d\n",emp1.emp_id);
else if(flag==1)
printf("%d\n",emp2.emp_id);
else
printf("%d\n",emp3.emp_id);
}
void name()
{
char c1='R';
printf("emp_id of employee whose name starts with R-\n");
if(emp1.name[0]==c1)
printf("%d\n",emp1.emp_id);
if(emp2.name[0]==c1)
printf("%d\n",emp2.emp_id);
if(emp3.name[0]==c1)
printf("%d\n",emp3.emp_id);
}
