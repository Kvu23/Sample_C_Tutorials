/* program to check size of data types*/

#include <stdio.h>
#include <limits.h>
int main()
{
    // int a = 4000;            // positive integer data type
    // float b = 5.2324;        // float data type
    // char c = 'Z';            // char data type
    // long d = 41657;          // long positive integer data type
    // int f = -185;            // -ve integer data type
    // short g = 130;           // short +ve integer data type
    // double i = 4.1234567890; // double float data type
    // float j = -3.55;         // float data type
    printf("Storage size for int is: %ld \n", sizeof(int));
    printf("Storage size for float is: %ld \n", sizeof(float));
    printf("Storage size for char is: %ld \n", sizeof(char));
    printf("Storage size for long is: %ld \n", sizeof(long));
    printf("Storage size for short is: %ld \n", sizeof(short));
    printf("Storage size for double is: %ld \n", sizeof(double));
    return 0;
}
