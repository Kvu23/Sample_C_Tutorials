/*
 * pattern1.c - multiple pattern printing functions
 *
 * Description:
 *   Provides several console pattern-printing functions used as examples
 *   for common triangle, pyramid and square patterns. Functions include
 *   left/right triangles, centered pyramid, inverted triangle, diamond,
 *   hollow square and hollow pyramid.
 *
 * Usage:
 *   Compile: gcc pattern1.c -o pattern1
 *   Run: ./pattern1  (prompts for `n` and uses default 5 on invalid input)
 */

#include <stdio.h>

/* Print a left-aligned growing triangle:
   For n = 5:
   *
   **
   ***
   ****
   *****
*/
void left_triangle(int n)
{
    // each row i has i stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // print i stars
            printf("*");
        printf("\n"); // move to next row
    }
}

/* Print a right-aligned triangle:
   Adds leading spaces so stars align at right.
   For n = 5:
       *
      **
     ***
    ****
   *****
*/
void right_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++) // print leading spaces (n-i)
            printf(" ");
        for (int j = 1; j <= i; j++) // print i stars
            printf("*");
        printf("\n");
    }
}

/* Print a centered pyramid:
   Uses "* " (star + space) to keep columns even.
   For n = 5:
       *
      * *
     * * *
    * * * *
   * * * * *
*/
void centered_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++) // leading spaces to center row
            printf(" ");
        for (int k = 1; k <= i; k++) // print i stars separated by a space
            printf("* ");
        printf("\n");
    }
}

/* Print an inverted left-aligned triangle:
   For n = 5:
   *****
   ****
   ***
   **
   *
*/
void inverted_left_triangle(int n)
{
    for (int i = n; i >= 1; i--) // start from n down to 1
    {
        for (int j = 1; j <= i; j++) // print i stars
            printf("*");
        printf("\n");
    }
}

/* Print a diamond (pyramid + mirrored pyramid):
   Top: rows 1..n; Bottom: rows n-1..1
*/
void diamond(int n)
{
    // top half (including center row)
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++) // leading spaces
            printf(" ");
        for (int k = 1; k <= i; k++) // stars with trailing space for alignment
            printf("* ");
        printf("\n");
    }
    // bottom half (mirror, excluding center row)
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++) // leading spaces
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }
}

/* Print a hollow square of size n:
   Border positions are '*', interior is space.
*/
void hollow_square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // print star if on border row or border column
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

/* Print a hollow pyramid:
   Each row has (2*i - 1) positions; only edges and base are stars.
*/
void hollow_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++) // leading spaces to center the pyramid
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            // print star for the two edges or for the base row
            if (i == n || j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{
    int n = 5;

    // Prompt user for size. If input invalid or non-positive, default to 5.
    printf("Enter size (n) [default 5]: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        n = 5;

    // Call each pattern in order with a small heading.
    printf("\nPattern 1: Left triangle\n");
    left_triangle(n);

    printf("\nPattern 2: Right triangle\n");
    right_triangle(n);

    printf("\nPattern 3: Centered pyramid\n");
    centered_pyramid(n);

    printf("\nPattern 4: Inverted left triangle\n");
    inverted_left_triangle(n);

    printf("\nPattern 5: Diamond\n");
    diamond(n);

    printf("\nPattern 6: Hollow square\n");
    hollow_square(n);

    printf("\nPattern 7: Hollow pyramid\n");
    hollow_pyramid(n);

    return 0;
}
