#include <stdio.h>
int main()
{
int n,i=1,result=0;
printf("Enter the number-");
scanf("%d",&n);
   while(i<=n)
    {
	result=result+(i*i*i);
	i++;
    }
printf("Sum of cubes till given number-%d\n",result);
return 0;
}
