/* substraction of matrix using 2d array */
#include <stdio.h>

int main(void)
{
    int i, j, a[3][3], b[3][3], c[3][3];

    printf("please enter elements of matrix a:  \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("please enter elements of matrix b:  \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n resultant matrix c substraction is :   \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n resultant matrix c addition is :   \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
