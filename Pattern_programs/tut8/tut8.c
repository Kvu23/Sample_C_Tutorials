/*
 * pattern6.c - growing numeric triangle
 *
 * Description:
 *   Prints rows of increasing numbers: row i contains numbers 1..i.
 *
 * Usage:
 *   Compile: gcc pattern6.c -o pattern6
 *   Run: ./pattern6
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
