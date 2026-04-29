/*
 * tut21.c - numeric triangle (note: inner increment behaviour)
 *
 * Description:
 *   Reads `n` and attempts to print numbers per row. Note: the inner loop
 *   manually increments `j` inside the loop body in addition to the loop's
 *   own increment. This causes the loop to skip every other number and is
 *   likely unintended; the manual `j++` is documented below.
 *
 * Usage:
 *   Compile: gcc tut21.c -o tut21
 *   Run: ./tut21  (enter integer `n` on stdin)
 */

#include <stdio.h>
int main()
{
    int i, j, n;
    if (scanf("%d", &n) != 1)
        return 1;
    for (i = 1; i <= n; i++)
    {
        /*
         * Inner loop prints numbers 1..i but contains an extra `j++`.
         * The manual `j++` causes the loop index to advance by 2 each
         * iteration; remove the manual increment to print sequentially.
         */
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
    }
    return 0;
}
