// print table of 10 numbers //
#include <stdio.h>
int main()

{
    int i, j, n, table;

    printf("enter the value of number for table:   ");
    scanf("\n\n%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            table = i * j;
            printf("\n%d * %d = %d\n", i, j, table);
        }
    }

    return 0;
}
