/* Programs for reverse number */
#include <stdio.h>
int main()
{
    int a, b = 0;

    printf("please enter any number:  ");
    scanf("%d", &a);

    while (a != 0)
    {
        b = b * 10;
        b = b + a % 10;
        a = a / 10;
    }
    printf("reverse number is: %d\n", b);
    return 0;
}