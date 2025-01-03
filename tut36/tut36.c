/* find sum of first n numbers using recursive functions */
#include <stdio.h>
int sum(int n);

int main()
{
    int num, add;
    printf("please enter your number:  ");
    scanf("%d", &num);

    add = sum(num);
    printf("\n sum = %d\n", add);

    return 0;
}

int sum(int n)
{
    if (n == 0)
        return n;
    else
        return n + sum(n - 1);
}
