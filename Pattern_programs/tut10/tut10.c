/*
 * tut10.c - centered numeric pyramid
 *
 * Description:
 *   Prints rows of numbers aligned to form a pyramid. Each row i contains
 *   the numbers 1..i with a leading space before each number for alignment.
 *
 * Usage:
 *   Compile: gcc tut10.c -o tut10
 *   Run: ./tut10
 */

#include <stdio.h>
int main()

{
    int i, j, k, n = 5;

    /* For each row, print leading spaces then numbers 1..i (with spacing) */
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n\n");
    }
    return 0;
}
