/*
 * tut17.c - diamond-like star pattern
 *
 * Description:
 *   Prints an upward triangle of '*' (rows 1..5) followed by a downward
 *   triangle (rows 4..1) to form a diamond-like shape when viewed together.
 *
 * Usage:
 *   Compile: gcc tut17.c -o tut17
 *   Run: ./tut17
 */

#include <stdio.h>
int main()

{
	int i, j, k, l;

	/* Top half: growing triangle */
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	/* Bottom half: shrinking triangle */
	for (k = 4; k >= 1; k--)
	{
		for (l = 1; l <= k; l++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}
