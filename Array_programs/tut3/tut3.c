/* find out length of string using strlen function*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30];

    printf("please enter string:   ");
    fgets(str1, sizeof(str1), stdin); /* get string */
    printf("length of str1= %ld\n\n", strlen(str1));
    return 0;
}
