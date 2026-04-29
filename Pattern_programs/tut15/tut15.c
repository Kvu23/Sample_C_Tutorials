/*
 * pattern13.c - rows of square numbers
 *
 * Description:
 *   Prints rows where each printed value is num*num. `num` increases each
 *   row, so row i contains i copies of num*num (with num incremented after the row).
 *
 * Usage:
 *   Compile: gcc pattern13.c -o pattern13
 *   Run: ./pattern13
 */

#include <stdio.h>
int main()

{
	int i, j, num = 1;
	/* For each row increase num and print i copies of num*num */
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", num * num);
		}
		num++;
		printf("\n\n");
	}
	return 0;
}
