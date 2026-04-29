/*
 * pattern4.c - spaced right-aligned triangle
 *
 * Description:
 *   Prints a right-aligned triangle where each star is prefixed by a space
 *   to create a spaced appearance (e.g., " *").
 *
 * Usage:
 *   Compile: gcc pattern4.c -o pattern4
 *   Run: ./pattern4
 */

#include <stdio.h>
int main()

{
	int i, j, k, n = 5;

	/* Leading spaces to right-align, then print ' *' i times */
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf(" *");
		}
		printf("\n\n");
	}
	return 0;
}
