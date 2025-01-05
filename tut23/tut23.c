/* C program to check whether a number is palindrome or not */

#include <stdio.h>

int CheckPalindrome(int num)
{
    static int sum = 0, r;

    if (num != 0)
    {
        r = num % 10;
        sum = sum * 10 + r;
        CheckPalindrome(num / 10);
    }
    return sum;
}

int main()
{
    int n, reverse = 0, rem, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    /* Checking if number entered by user and it's reverse number is equal. */
    if (reverse == n)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    if (n == CheckPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
