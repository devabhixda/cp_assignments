#include <stdio.h>
int fibo(int);
int main()
{
    int num;
    int result;
    int c, i = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for ( c = 1 ; c <= num ; c++ )
   {
      printf("%d ", fibo(i));
      i++;
   }
   printf("\n");
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
