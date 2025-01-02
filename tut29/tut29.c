// check weather number is positive or negative //

#include <stdio.h>
int main()

{
    float num;

    printf("please enter any number:  ");
    scanf("\n%f", &num);

    if (num <= 0)
    {
        if (num == 0)
            printf("entered number is zero\n");
        else
            printf("%f is negative number\n", num);
    }
    else
        printf("%f is positive number\n", num);
    return 0;
}
