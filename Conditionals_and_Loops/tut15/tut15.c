// to make summation of first and last digit //

#include <stdio.h>
int main()
{
    int num;
    int sum = 0, lastDigit;

    // Accepting the any number from users.
    printf("Enter any positive number more than one digit : ");
    scanf("%d", &num);

    // calculating the sum of first and last digit.
    sum = sum + num % 10; // adding the first digit.
    while (num != 0)
    {
        lastDigit = num;
        num = num / 10;
    }
    sum = sum + lastDigit; // adding the last digit.

    // printing the sum
    printf("\nSum of first and last digit of given numer is :%d\n", sum);
}
