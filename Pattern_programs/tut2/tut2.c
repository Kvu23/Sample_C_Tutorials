/*
 * tut2.c - Multiplication Table (12x12)
 *
 * Description:
 *   Prints a 12x12 multiplication table to the console. Each row represents
 *   the multiples of a number from 1 to 12.
 *
 * Usage:
 *   Compile: gcc tut2.c -o tut2
 *   Run: ./tut2
 */

#include <stdio.h>

int main()
{
    /* Define the variables 	*/
    int count1, count2; /* General purpose counters 	*/
    int value;          /* result of a multiply calc 	*/

    for (count1 = 1; count1 <= 12; count1++)
    {
        for (count2 = 1; count2 <= 12; count2++)
        {
            value = count1 * count2;
            printf("%5d ", value);
        }
        printf("\n");
    }
    return 0;
}
