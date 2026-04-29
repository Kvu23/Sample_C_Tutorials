/*
 * tut16.c - alternating 0/1 triangle
 *
 * Description:
 *   Prints a triangle of 0s and 1s. The `count` variable toggles and the
 *   pattern resets based on the row parity to create an alternating layout.
 *
 * Usage:
 *   Compile: gcc tut16.c -o tut16
 *   Run: ./tut16
 */

#include <stdio.h>

int main()
{
    int i, j;
    int count = 1;

    /* Print triangle where each printed value is count%2; reset count by row parity */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count % 2);
            count++;
        }

        printf("\n\n");

        if (i % 2 == 0)
            count = 1;
        else
            count = 0;
    }

    return (0);
}
