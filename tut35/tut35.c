/* factorial using recursive function */
#include <stdio.h>

int factorial(unsigned long int i)
{

    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int main()
{
    unsigned long int i;
    printf("Enter a number to find factorial : ");
    scanf("%lu", &i);
    printf("Factorial of %ld is %u\n", i, factorial(i));
    return 0;
}
