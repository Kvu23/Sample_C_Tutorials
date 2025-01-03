/* Dangling pointer */
#include <stdio.h>
#include <stdlib.h>

int *call(void);

int main()
{

    int *ptr;
    ptr = call();

    fflush(stdin);
    printf("%d", *ptr);
    return 0;
}

int *call(void)
{

    int x = 25;
    ++x;
    return &x; /* this will give error because returning local variable address */
}
