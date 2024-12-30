/* Program to understand factorial programs*/

#include <stdio.h>

int main()
{
    int c, n;
    unsigned long int fact = 1;

    printf("Enter a number to calculate it's factorial:   ");
    scanf("%d", &n);

    for (c = 1; c <= n; c++)
        fact = fact * c;

    printf("Factorial of %d = %lu\n", n, fact);

    return 0;
}
