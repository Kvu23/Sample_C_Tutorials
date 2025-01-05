/* insert an elementt in an array */
#include <stdio.h>

int main(void)
{
    int a[100], n, i, pos, value;
    printf("please enter size of an array:   ");
    scanf("%d", &n);
    printf("please enter elements of an array:  ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("please enter the position where you insert an elements:   ");
    scanf("%d", &pos);

    printf("please enter the elements you want to insert:   ");
    scanf("%d", &value);

    for (i = n - 1; i > pos - 1; i--)
    {
        a[i + 1] = a[i];
        a[pos - 1] = value;
    }

    for (i = 0; i <= n; ++i)
    {
        printf("%d", a[i]);
        printf("\n");
    }

    return 0;
}
