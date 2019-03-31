#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter the number-");
scanf("%d",&n);
i=n%10;
j=n/10;
if(j=(i+4)&&n/(i+j)==7)
printf("Number is %d\n",n);
else
printf("Does not satisfy\n");
return 0;
}
