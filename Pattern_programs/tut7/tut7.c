/*
 * tut7.c - centered numeric triangle
 *
 * Description:
 *   Prints a right/centered triangle where each row contains numbers 1..i,
 *   preceded by spaces to align the triangle to the center/right.
 *
 * Usage:
 *   Compile: gcc tut7.c -o tut7
 *   Run: ./tut7
 */

#include <stdio.h>
int main()

{
    int i, j, k, n = 5;

    /* For each row, print leading spaces then numbers 1..i */
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n\n");
    }
    return 0;
}
