/*
 * pattern11.c - centered rows of repeated numbers
 *
 * Description:
 *   Prints centered rows where row i contains the number i repeated i times.
 *
 * Usage:
 *   Compile: gcc pattern11.c -o pattern11
 *   Run: ./pattern11
 */

#include <stdio.h>
int main()

{
	int i, j, k, n = 5;

	/* Print centered rows: leading spaces then i copies of i */
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf(" %d", i);
		}
		printf("\n\n");
	}
	return 0;
}
