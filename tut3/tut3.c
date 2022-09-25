#include <stdio.h>

void Reverse_Char(char *arr, int length)
{
    int i=0, High = length - 1, no_of_loopCount = 0;
    no_of_loopCount = length /2;
    char temp;
    
    if(length <= 0)
    {
        printf("Array is empty so cant reverse array\n");
        return ;
    }
    else if(length == 1)
    {
        printf("only 1 element so reverse character is itself %c\n", arr[i]);
    }
    else
    {
        printf("Before Reverse characters\n");
        for (size_t i = 0; i < sizeof(arr); i++)
        {
            /* code */
            printf("%c ", arr[i]);
        }
        printf("\n\n");

        for (i = 0; i < no_of_loopCount; i++)
        {
            /* code */
            //store character of first index in temp variable
            temp = arr[i];
            //store last character in first index
            arr[i] = arr[High];
            //store temp in last index of array
            arr[High] = temp;
            //decrement index 
            High--;

        }

        printf("After Reverse character\n");
        for (size_t i = 0; i < sizeof(arr); i++)
        {
            /* code */
            printf("%c ", arr[i]);
        }
        printf("\n");
    } 
}

int main(int argc, char const *argv[])
{
    /* code */
    char str[] = {};
    char str1[] = {'k'};
    char str2[] = {'k','a', 'u','s','h','i','k'};

    Reverse_Char(str, sizeof(str));
    Reverse_Char(str1, sizeof(str1));
    Reverse_Char(str2, sizeof(str2));
    
    return 0;
}
