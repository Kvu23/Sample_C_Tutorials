/* sort the array using function */
#include <stdio.h>

void sort(int m, int x[]);

int main(void)
{
    int i;
    int marks[5] = {45, 90, 73, 81, 35};

    printf("Marks before sorting\n");
    for (i = 0; i < 5; i++)
        printf("%d ", marks[i]);
    printf("\n\n");

    sort(5, marks);
    printf("Marks after sorting\n");
    for (i = 0; i < 5; i++)
        printf("%4d", marks[i]);
    printf("\n");
    return 0;
}

void sort(int m, int x[])
{
    int i, j, t;

    for (i = 1; i <= m - 1; i++)
    {
        for (j = 1; j <= m - i; j++)
        {
            if (x[j - 1] >= x[j])
            {
                t = x[j - 1];
                x[j - 1] = x[j];
                x[j] = t;
            }
        }
    }
}
