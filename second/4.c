#include<stdio.h>
int main()
{
int n,i,flag=1;
printf("Enter the number-");
scanf("%d",&n);
while(n!=0)
{
for(i=2;i<n;i++)
{
{
if(n%i==0)
flag=0;
break;
}
}
n=n/10;
}
if(flag==1)
printf("yes\n");
else
printf("no\n");
return 0;
}
