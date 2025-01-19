/*program to find given number is mutiple of another number or not*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int number1, number2;
    printf("enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    if (number1 % number2 == 0)
    {
        printf("%d is multiple of %d\n", number1, number2);
    }
    else
    {
        printf("%d is not multiple of %d\n", number1, number2);
    }

    return 0;
}
