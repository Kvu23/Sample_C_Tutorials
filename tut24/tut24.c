/*Odd and even numbers print */

#include <stdio.h>
int main()

{
    unsigned int i, number;
    printf("enter the number up to which you want to check odd and even number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even number %u\n", i);
        }
        else
        {
            printf("Odd number %u\n", i);
        }
    }

    return 0;
}
