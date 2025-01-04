/* summation and average */
#include <stdio.h>

int main(void)
{
    int i, sum = 0, num, arr[10];
    float avg;
    printf("please enter size of an array:  ");
    scanf("%d", &num);
    /* reading values from arrays */
    printf("\n please enter elements of array:  ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        avg = (sum) / num;
    }

    /* print summation and average */
    printf("\n summation and average are %d and %f\n\n", sum, avg);
    return 0;
}
