/* find out minimum and maximum number from the given matrix */
#include <stdio.h>

int main(void)
{
    int i, j, a[3][3], min, max;
    printf("please enter 3x3 matrix elements of a:  \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    min = a[0][0];

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("minimum number from matrix is %d\n", min);

    max = a[0][0];
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("maximum number from matrix is %d\n", max);
    return 0;
}
