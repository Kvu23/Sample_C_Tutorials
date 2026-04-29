/*
 * pattern18.c - side-by-side mirrored triangles
 *
 * Description:
 *   Prints two mirrored triangles on the same line separated by spaces.
 *   The outer loop runs from `row` down to 1 and prints left stars, spacing,
 *   then right stars to form a symmetric shape.
 *
 * Usage:
 *   Compile: gcc pattern18.c -o pattern18
 *   Run: ./pattern18
 */

#include <stdio.h>
int main()

{

	int i, j, k, row = 5;

	/* For each line print left stars, middle spacing, then right stars */
	for (i = row; i >= 1; i--)
	{
		printf("\n");
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		for (j = row - 1; j >= i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
	}
	return 0;
}
