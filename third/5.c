#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
int *a[3],minor[4],*cof[3],*adj[3],det=0;
int i,j,k,l,count;
float *inv[3],x;
for(i=0;i<3;i++)
{
a[i]=(int*)malloc(3*sizeof(int));
cof[i]=(int*)malloc(3*sizeof(int));
adj[i]=(int*)malloc(3*sizeof(int));
inv[i]=(float*)malloc(3*sizeof(float));
}
printf("ENTER THE ELEMENTS INTO ARRAY\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",(*(a+i)+j));
}
printf("\nCOFACTOR MATRIX:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
count=0;
for(k=0;k<3;k++)
{
for(l=0;l<3;l++)
{
if((k!=i)&&(l!=j))
{
minor[count]=*(*(a+k)+l);
count++;
}
}
}
(*(*(cof+i)+j))=(minor[0]*minor[3])-(minor[1]*minor[2]);
(*(*(cof+i)+j))=(*(*(cof+i)+j))*(pow((-1),(i+j)));
printf("%5d",*(*(cof+i)+j));
}
printf("\n");
}
for(i=0;i<3;i++)
det=det+(*(*(a+0)+i))*(*(*(cof+0)+i));
printf("DETERMINANT : %d\n",det);
if(det==0)
printf("\nINVERSE DOES NOT EXIST\n");
else
{
x=(1.0)/(float)det;
printf("\nADJOINT MATRIX:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
(*(*(adj+i)+j))=(*(*(cof+j)+i));
printf("%5d",(*(*(adj+i)+j)));
}
printf("\n");
}
printf("\nTHE RESULT IS:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
(*(*(inv+i)+j))=x*(float)(*(*(adj+i)+j));
printf("%.3f\t",*(*(inv+i)+j));
}
printf("\n");
}
}
}

