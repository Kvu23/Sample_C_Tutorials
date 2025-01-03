/* C program to check whether a number is prime or not. */

#include <stdio.h>

int main()
{
    unsigned long int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%lu", &n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%lu is a prime number\n.", n);
    }
    else
    {
        printf("%lu is not a prime number\n.", n);
    }

    return 0;
}
