// to find maximum digit from the given number //

#include <stdio.h>
int main()
{
    unsigned long int num;
    int large = 0, rem = 0;

    printf("Enter your input value:");
    scanf("%lu", &num);

    while (num > 0)
    {
        rem = num % 10;

        if (rem > large)
        {
            large = rem;
        }

        num = num / 10;
    }
    printf("Largest digit of the number is %d\n", large);
    return 0;

    return 0;
}
