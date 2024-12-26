/* program to understand static storage class */
#include <stdio.h>
void func(void);
static int count = 5;

int main()
{
    while (count--)
    {
        func();
    }
    return 0;
}

void func(void)
{
    static int i = 5;
    i++;
    printf("\n value of i and count are : %d %d\n", i, count);
}
