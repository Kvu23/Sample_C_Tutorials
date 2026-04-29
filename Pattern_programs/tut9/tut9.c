/*
 * pattern7.c - descending number sequences per row
 *
 * Description:
 *   Reads an integer `n` and prints `n` rows where row i contains the
 *   numbers i, i-1, ..., 1.
 *
 * Usage:
 *   Compile: gcc pattern7.c -o pattern7
 *   Run: ./pattern7  (enter an integer when prompted)
 */

#include <stdio.h>
int main()
{
	int i, j, k, n;

	printf("Enter n: ");
	if (scanf("%d", &n) != 1)
	{
		return 1;
	}
	if (n <= 0)
	{
		return 0;
	}

	/* For each i from 1..n print i down to 1 */
	for (i = 1; i <= n; ++i)
	{
		for (j = i; j >= 1; j--)
		{
			printf("%d", j);
		}
		printf("\n\n");
	}
	return 0;
}
