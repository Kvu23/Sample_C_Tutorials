/*
 * tut4.c - inverted left-aligned triangle
 *
 * Description:
 *   Prints an inverted triangle made of '*' characters. Rows decrease
 *   from 5 down to 1 with a blank line between rows.
 *
 * Usage:
 *   Compile: gcc tut4.c -o tut4
 *   Run: ./tut4
 */

#include <stdio.h>
int main()

{
    int i, j;

    /* Outer loop: row count from 5 down to 1 */
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}
