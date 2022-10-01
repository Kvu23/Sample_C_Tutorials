// this programs do the reverse number

#include <stdio.h>

void reverse_num(int num)
{
    int rev = 0, rem = 0;
    
    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    
    printf("reverse number is %d\n\n", rev);
}


int main(int argc, char const *argv[])
{
    /* code */
    int number = 0;
    printf("please enter a number: ");
    scanf("%i", &number);
    reverse_num(number);

    return 0;
}
