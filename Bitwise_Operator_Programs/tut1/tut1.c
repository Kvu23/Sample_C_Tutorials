/* program to understand and print binary number pattern using bitwise operators*/
#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main(void)
{
    unsigned number;
    printf("please enter a number:  ");
    scanf("%u", &number);

    bin(number);
    printf("\n\n");
}
