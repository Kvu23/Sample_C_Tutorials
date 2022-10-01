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

int recursive_reverse(int num)
{
    static int rev = 0, rem = 0;

    if(num  > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        recursive_reverse(num/10);
        return rev;
    }
    else
    {
        return 0;
    }

    return rev;
    //printf("Reverse number is %d\n\n", rev);

}


int main(int argc, char const *argv[])
{
    /* code */
    int number = 0, rev_num = 0;
    printf("please enter a number: ");
    scanf("%i", &number);
    reverse_num(number);
    rev_num = recursive_reverse(number);
    printf("Reverse number is %d\n\n", rev_num);
    return 0;
}

