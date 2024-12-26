/*Sample programs to print array elements*/
// array programs //

#include <stdio.h>
int main()
{
    int i, a[20] = {10, 20, 30, 40, 50, 12, 15, 63, 48, 9, 6, 3, 3, 74, 85};

    for (i = 0; i < 20; i++)
    {
        printf("a[%d] = %d\t", i, a[i]);
    }
    printf("\n\n");
    return 0;
}
