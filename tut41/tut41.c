/* This program denotes the command line arguments here and do sum of number which are passed */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int argument, sum;

    for(argument = 1; argument < argc; argument++)
    {
        sum = sum + atoi(argv[argument]);
    }

    printf("Sum of %d numbers is %d\n", argc-1, sum);
    return 0;
}
