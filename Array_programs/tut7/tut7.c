/* Find min and Mcax from the given numbers in array*/

#include <stdio.h>
int main()
{
    int i, num, arr[10], min, max ;
    printf("\n please enter size of array:  ");
    scanf("%d", &num);

    /* reading value from array */
    printf("\n please enter elements of array:  ");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    min = arr[0];

    for (i = 0; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];            
        }
    }

    max = arr[0];
    for (i = 0; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\n minimuum elements of array is %d", min);
    printf("\n maximum elements of array is %d\n", max);
    return 0;
}
