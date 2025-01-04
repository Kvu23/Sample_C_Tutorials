/* to sort the array of elements ascending*/

#include <stdio.h>

int main()
{
    int arr[10], i, j, num, temp;
    printf("please enter size of an array:   ");
    scanf("%d", &num);
    printf("please enter elements of an array:  ");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num - 1; ++i)
    {
        for (j = i + 1; j < num; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n sorted list of array in ascending order \n");
    for (i = 0; i < num; ++i)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
