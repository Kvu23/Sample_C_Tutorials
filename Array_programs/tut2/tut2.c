// Array printing programs //

#include <stdio.h>
int main()
{
    int j, a[5] = {
               1,
               23,
               24,
               26,
           };

    for (j = 0; j <= 5; j++)
    {
        printf(" a[%d] is = %d\n", j, a[j]);
    }
    return 0;
}
