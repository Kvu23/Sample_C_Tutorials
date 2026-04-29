/*
 * tut8.c - growing numeric triangle
 *
 * Description:
 *   Prints rows of increasing numbers: row i contains numbers 1..i.
 *
 * Usage:
 *   Compile: gcc tut8.c -o tut8
 *   Run: ./tut8
 */

#include <stdio.h>
int main()

{
    int i, j;
    /* Print rows where each row i shows numbers 1..i */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n\n");
    }
    return 0;
}
