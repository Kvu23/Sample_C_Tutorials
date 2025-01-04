// make summation of digits of given number /

#include <stdio.h>
int main()
{
    int num, sum = 0, r;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + r;
    }

    printf("Sum of digits of number:  %d\n\n", sum);
    return 0;
}
