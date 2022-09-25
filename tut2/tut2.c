/*
this program simple checks for which version of C we are using
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    #if __STDC_VERSION__ >= 201710L
    printf("We are using C18\n");
    #elif __STDC_VERSION__ >= 201112L
    printf("We are using C11\n");
    #elif __STDC_VERSION__ >= 199901L
    printf("We are using C99\n");
    #else
    printf("We are using C89/90\n");
    #endif
    return 0;
}
