/*
 * tut1.c - right-aligned growing triangle with user-defined initial spacing
 *
 * Description:
 *   Reads an integer `no_of_spaces` from the user. Prints a right-aligned
 *   triangle of '*' characters. Each row has leading spaces that decrease
 *   with each row, and the number of stars increases. The initial indentation
 *   is set by the user input.
 *
 * Usage:
 *   Compile: gcc tut1.c -o tut1
 *   Run: ./tut1 (prompts for initial number of spaces)
 */
#include <stdio.h>
int main()
{
    char ch = '*';
    int i, j, no_of_spaces, spaceCount;

    printf("enter number of spaces:  ");
    scanf("%d", &no_of_spaces);

    for (i = 1; i <= 5; i++)
    {
        for (spaceCount = no_of_spaces; spaceCount >= 1; spaceCount--)
        {
            printf("  "); // 2spaces
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2c", ch);
        }
        printf("\n");
        no_of_spaces--;
    }
    return 0;
}
