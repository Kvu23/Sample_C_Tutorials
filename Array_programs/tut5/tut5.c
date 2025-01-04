/* enter elements of array and find odd and even numbers */
#include <stdio.h>
int main()
{
    int i, num, arr[10], cev = 0, co = 0;
    printf("please enter size of an array:  ");
    scanf("%d", &num);

    /* reading value form array*/

    printf("please enter elements of an array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    /* check for odd and even numbers*/
    for (i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("\n even number is %d", arr[i]);
            arr[i] = cev;
            cev++;
        }
        else
        {
            printf("\n odd number is %d", arr[i]);
            arr[i] = co;
            co++;
        }
    }
    printf("\n \n total even numbers are %d", cev);
    printf("\n \n tottal odd numbers are %d", co);

    return 0;
}
