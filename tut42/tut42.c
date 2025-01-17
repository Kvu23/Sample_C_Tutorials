/*Program to print size of the data types*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    printf("Size of int is %ld\n", sizeof(int));
    printf("Size of short int is %ld\n", sizeof(short int));
    printf("Size of float is %ld\n", sizeof(float));
    printf("Size of char is %ld\n", sizeof(char));
    printf("Size of long is %ld\n", sizeof(long));
    printf("Size of long int is %ld\n", sizeof(long int));
    printf("Size of unsigned long int is %ld\n", sizeof(unsigned long int));
    printf("Size of double is %ld\n", sizeof(double));
    printf("Size of long double is %ld\n", sizeof(long double));
    return 0;
}
