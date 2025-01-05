/* factorial using recursive function and via loop*/
#include <stdio.h>

long factorial_recursive(unsigned long int i)
{

    if (i <= 1)
    {
        return 1;
    }
    return i * factorial_recursive(i - 1);
}

long factorial_iterative(int n)
{
    int c;
    long result = 1;

    for (c = 1; c <= n; c++)
        result = result * c;

    return result;
}

int main()
{
    unsigned long int i;
    printf("Enter a number to find factorial : ");
    scanf("%lu", &i);
    printf("Factorial of %ld is %lu\n", i, factorial_recursive(i));
    printf("Factorial of %ld is %lu\n", i, factorial_iterative(i));
    return 0;
}
