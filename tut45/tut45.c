#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    // Input three different numbers
    printf("Enter three different numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Sorting and displaying in increasing order
    if (num1 <= num2 && num2 <= num3)
    {
        printf("Numbers in increasing order: %d %d %d\n", num1, num2, num3);
    }
    else if (num1 <= num3 && num3 <= num2)
    {
        printf("Numbers in increasing order: %d %d %d\n", num1, num3, num2);
    }
    else if (num2 <= num1 && num1 <= num3)
    {
        printf("Numbers in increasing order: %d %d %d\n", num2, num1, num3);
    }
    else if (num2 <= num3 && num3 <= num1)
    {
        printf("Numbers in increasing order: %d %d %d\n", num2, num3, num1);
    }
    else if (num3 <= num1 && num1 <= num2)
    {
        printf("Numbers in increasing order: %d %d %d\n", num3, num1, num2);
    }
    else if (num3 <= num2 && num2 <= num1)
    {
        printf("Numbers in increasing order: %d %d %d\n", num3, num2, num1);
    }

    return 0;
}
