#include <stdio.h>

int power(int, int);

int main()
{
    int x, n, result;

    printf("Enter base number: ");
    scanf("%d",&x);

    printf("Enter power number(positive integer): ");
    scanf("%d",&n);

    result = power(x, n);

    printf("%d^%d = %d\n", x, n, result);
    return 0;
}

int power(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}
