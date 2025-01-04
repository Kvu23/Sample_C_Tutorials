/* find out second smallest number */
#include <stdio.h>

int main(void)
{
    int arr[10], num, i, j = 0, min, smin;
    printf("please enter size of an array:  ");
    scanf("%d", &num);
    printf("please enter elements of an array:   ");

    for (i = 0; i < num; ++i)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (i = 1; i < num; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            j = i;
        }
    }

    smin = arr[num - j - 1];
    printf("Second minimum  number is %d\n\n", smin);

    // for (i = 1; i < num; i++)
    // {
    //     if (smin > arr[i] && j != i)
    //     {
    //         smin = arr[i];
    //     }
    // }
    // printf("second smallest number is: %d\n\n", smin);
    return 0;
}
