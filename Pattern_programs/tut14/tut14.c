/*
 * tut14.c - sequential numbering triangle
 *
 * Description:
 *   Prints consecutive numbers across the rows: row 1 has 1, row 2 has 2 numbers, etc.
 *   The numbering continues across rows (num is incremented through the rows).
 *
 * Usage:
 *   Compile: gcc tut14.c -o tut14
 *   Run: ./tut14
 */

#include <stdio.h>
int main()

{
    int i, j, num = 1;
    /* Print increasing sequence numbers across rows */
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n\n");
    }
    return 0;
}
