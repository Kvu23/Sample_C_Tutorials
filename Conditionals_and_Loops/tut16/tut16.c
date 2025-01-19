/* sample program to understand single selection if statements*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int number1, number2;
    printf("please enter the 2 integer numbers: \n");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2)
    {
        printf("The number %d is larger\n", number1);
    }

    if (number1 == number2)
    {
        printf("Both numbers are equal\n");
    }

    return 0;
}
