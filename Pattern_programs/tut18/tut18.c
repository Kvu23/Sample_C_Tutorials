/*
 * pattern16.c - inverted then growing triangle
 *
 * Description:
 *   Prints an inverted triangle (rows 5..1) followed by a growing triangle
 *   (rows 2..5) to form a symmetric shape.
 *
 * Usage:
 *   Compile: gcc pattern16.c -o pattern16
 *   Run: ./pattern16
 */

#include <stdio.h>
int main()

{
	int i, j, k, l;
	/* Top (inverted) triangle */
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	/* Bottom (growing) triangle */
	for (k = 2; k <= 5; k++)
	{
		for (l = 1; l <= k; l++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	return 0;
}
