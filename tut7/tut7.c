/*Sample program to check return values of 
printf functions*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int retval = printf("This is a C program from VS code linux\n");
    printf("Return value is %d\n\n", retval);
    return 0;
}
