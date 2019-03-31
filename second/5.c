#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
int i,j,k;
char str[10];
scanf("%s",str);
int n=strlen(str);
char temp[n];
for(i=0;i<n;i++)
{
j=i;
k=0;
while(str[j]!='\0')
{
temp[k]=str[j];
k++;
j++;
}
j=0;
while(j<i)
{
temp[k]=str[j];
j++;
k++;
}
printf("%s\n",temp);
}
return 0;
}
