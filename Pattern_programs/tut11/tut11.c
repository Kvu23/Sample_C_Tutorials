/*
 * tut11.c - mirrored/centered star block
 *
 * Description:
 *   Produces a more complex centered/mirrored star pattern. Uses multiple
 *   loops to indent and print stars in symmetric groups.
 *
 * Usage:
 *   Compile: gcc tut11.c -o tut11
 *   Run: ./tut11
 */

#include <stdio.h>
int main()
{
    int i, j, k;

    /* Iterate rows from large to small, printing left padding and grouped stars */
    for (i = 5; i >= 1; --i)
    {
        for (k = 0; k < 5 - i; ++k)
        {
            printf("  ");
        }
        for (j = i; j <= 2 * i - 1; ++j)
        {
            printf(" *");
        }
        for (j = 0; j < i - 1; ++j)
        {
            printf(" *");
        }
        printf("\n\n");
    }
    return 0;
}
