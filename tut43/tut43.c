#include <stdio.h>


void Perform_ArithmaticOps(int num1, int num2, int num3)
{
    printf("Sum of 3 numbers: %d\n", num1 + num2 + num3);
    printf("Product of 3 numbers: %d\n", num1 * num2 * num3);
    printf("Average of 3 numbers: %d\n", (num1 + num2 + num3) / 3);

    if(num1 > num2 && num1 > num3)
    {
        printf("Largest number is: %d\n", num1);
    }

    if(num2 > num1 && num2 > num3)
    {
        printf("Largest number is: %d\n", num2);
    }
    
    if(num3 > num1 && num3 > num2)
    {
        printf("Largest number is: %d\n", num3);
    }

    if(num1 < num2 && num1 < num3)
    {
        printf("Smallest number is: %d\n", num1);
    }

    if(num2 < num1 && num2 < num3)
    {
        printf("Smallest number is: %d\n", num2);
    }
    
    if(num3 < num1 && num3 < num2)
    {
        printf("Smallest number is: %d\n", num3);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int num1, num2, num3;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    fflush(stdin);
    Perform_ArithmaticOps(num1, num2, num3);
    return 0;
}

