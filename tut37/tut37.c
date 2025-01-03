/*program to print fibonacci series*/

#include <stdio.h>

int fibonaci(int i)
{

    if (i == 0)
    {
        return 0;
    }

    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}

int main()
{

    int i, number;

    printf("Enter a number of terms to print: ");
    scanf("%d", &number);

    printf("Fibbonacci series is: \n");
    for (i = 0; i < number; i++)
    {
        printf("%d ", fibonaci(i));
    }
    printf("\n\n");
    return 0;
}
