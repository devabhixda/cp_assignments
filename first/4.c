#include<stdio.h>
#include<math.h>
int main()
{
int n,x,i,k,sum=0;
printf("Enter n-");
scanf("%d",&n);
printf("Enter x-");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
k=pow(x,i);
sum=sum+k;
}
printf("%d\n",sum);
return 0;
}
