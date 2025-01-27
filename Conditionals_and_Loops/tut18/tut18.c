/* sample program to make seperate out digits*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int number, digit = 1, temp_number, index = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    fflush(stdin);
    temp_number = number;
    /*count number of digits first*/
    while (number /= 10)
    {
        /* code */
        digit++, index++;
    }
    char arr[digit];
    memset(arr, 0, digit+1);
    // printf("digit = %d, index = %d\n", digit,index);
    number = temp_number;
    printf("storing number using array\n");

    /*store number in array*/
    while (digit--)
    {
        arr[digit] = number % 10;
        // printf("arr[%d] = %d\n", digit, arr[digit]);
        number /= 10;
    }

    /*print number using loop*/
    for (size_t i = 0; i < index; i++)
    {
        /* code */
        printf("%d   ", arr[i]);
    }
    printf("\n");
    return 0;
}
