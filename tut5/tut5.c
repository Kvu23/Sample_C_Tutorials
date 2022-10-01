#include <stdio.h>
#include <stdbool.h>

int Reverse_number(int number)
{
    int rev = 0, rem = 0;

    while(number != 0)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number /= 10; 
    }

    return rev ;
}


bool is_palindrome(int num)
{
    bool retval;
    int revnum = 0;

    revnum = Reverse_number(num);
    
    if(revnum == num)
    {
        retval = true;
    }
    else
    {
        retval = false;
    }

    return retval;
}


int main(int argc, char const *argv[])
{
    /* code */
    int number = 0;
    printf("please enter number :");
    scanf("%d", &number);
    
    if(is_palindrome(number))
    {
        printf("number %d is palindrome\n", number);
    }
    else
    {
        printf("number %d is not palindrome\n", number);

    }
    return 0;
}
