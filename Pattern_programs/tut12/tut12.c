/*
 * tut12.c - repeated row-number triangle
 *
 * Description:
 *   Prints rows where each row i contains the digit i repeated i times.
 *
 * Usage:
 *   Compile: gcc tut12.c -o tut12
 *   Run: ./tut12
 */

#include <stdio.h>
int main()

{
    int i, j;

    /* For each i, print the number i exactly i times */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n\n");
    }
    return 0;
}
