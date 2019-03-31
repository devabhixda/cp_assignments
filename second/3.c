#include <stdio.h>
#define MAXSIZE 10

int main()
{
	int array[MAXSIZE];
	int i, j, num=7, temp,k=0;
 int b[3];


	printf("Enter the elements one by one \n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < (num - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for(i=0;i<7;i++)
    {
        if(array[i]%2!=0)
        printf("%d",array[i]);
        else
        {
            b[k]=array[i];
            k++;
        }
    }
    for(k=0;k<3;k++)
    printf("%d",b[k]);
    printf("\n");
}
