/*Find the biggest number*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    void pmax(int first, int second);
    int i, j;
    for (i = -10; i <= 10; i++)
    {
        for (j = -10; j <= 10; j++)
        {
            pmax(i, j);
        }
    }
    exit(EXIT_SUCCESS);
}

void pmax(int a, int b)
{
    int biggest;
    if (a > b)
    {
        biggest = a;
    }
    else
    {
        biggest = b;
    }
    printf("\n larger of %d and %d is %d", a, b, biggest);
}
