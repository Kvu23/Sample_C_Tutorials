/*
 * pattern2.c - inverted left-aligned triangle
 *
 * Description:
 *   Prints an inverted triangle made of '*' characters. Rows decrease
 *   from 5 down to 1 with a blank line between rows.
 *
 * Usage:
 *   Compile: gcc pattern2.c -o pattern2
 *   Run: ./pattern2
 */

#include <stdio.h>
int main()

{
	int i, j;

	/* Outer loop: row count from 5 down to 1 */
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}

	return 0;
}
