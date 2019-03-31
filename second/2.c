#include<stdio.h>
int main()
{
int i,j,n,k,l,m,flag=0,arr[100][100]={0},fix=0,natural=1,store=0;
scanf("%d",&n);
for(i=0;i<=(n/2);i++)
{
 for(j=store;j<n;j++)
{
  if(arr[fix][j]!=0)
  break;
  arr[fix][j]=natural++;
}
store=fix;
fix=j-1;
 for(k=store+1;k<n;k++)
  {
    if(arr[k][fix]!=0)
    break;
    arr[k][fix]=natural++;
  }
fix=k-1;
store=fix;
for(l=store-1;l>=0;l--)
{
  if(arr[fix][l]!=0)
  break;
  arr[fix][l]=natural++;
}
fix=l+1;
 for(m=store-1;m>=0;m--)
{
 if(arr[m][fix]!=0)
  break;
   arr[m][fix]=natural++;
}
fix=m+1;
store=m+1;
}
for(i=0;i<n;printf("\n"),i++)
for(j=0;j<n;j++)
printf("%4d ",arr[i][j]);
return 0;
}
