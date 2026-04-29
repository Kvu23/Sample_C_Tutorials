/*
 * pattern17.c - full diamond (pyramid + mirrored pyramid)
 *
 * Description:
 *   Prints a centered pyramid of '*' characters up to `n` rows and then
 *   prints the mirrored (inverted) pyramid excluding the center row.
 *
 * Usage:
 *   Compile: gcc pattern17.c -o pattern17
 *   Run: ./pattern17
 */

#include <stdio.h>
int main()

{
	int i, j, k, n = 5;

	/* Top half: rows 1..n centered with leading spaces */
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("* ");
		}
		printf("\n\n");
	}
	/* Bottom half: rows n-1..1 */
	for (i = n - 1; i >= 1; i--)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("* ");
		}
		printf("\n\n");
	}

	return 0;
}
