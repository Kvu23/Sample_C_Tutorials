/*
 * pattern3.c - right-aligned growing triangle
 *
 * Description:
 *   Prints a right-aligned triangle of '*' characters. Each row has
 *   leading spaces so the stars align to the right edge.
 *
 * Usage:
 *   Compile: gcc pattern3.c -o pattern3
 *   Run: ./pattern3
 */

#include <stdio.h>
int main()

{
	int i, j, k, n = 5;

	/* For each row i, print (n-i) spaces then i stars */
	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= n - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}
