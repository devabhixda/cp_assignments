#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
char str[MAX];
scanf("%[^\n]%*c", str);
int i;
int length = strlen(str);
for(i=length-1;i>=0;i--)
{
if(str[i]==' ')
{
str[i] ='\0';
printf("%s ",&(str[i]) + 1);
}
}
printf("%s\n", str);
return 0;
}

