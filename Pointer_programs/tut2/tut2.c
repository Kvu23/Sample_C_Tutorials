/* Sample pointer program exercises */

#include <stdio.h>
#define MAX 3
int main()
{
    int var[] = {10, 100, 145};
    int i, *ptr;
    ptr = var;

    for (i = 0; i < MAX; i++)
    {
        printf("address of var[%d]= %p \n", i, ptr);
        printf("value of var[%d]= %d \n", i, *ptr);
        ptr++;
    }
    return 0;
}
