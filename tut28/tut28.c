/* float division */
#include <stdio.h>
int main()
{
    float a, b, result;

    printf("pleasre enter two numbers:    ");
    scanf("%f %f", &a, &b);

    result = (a / b);

    printf("the result of float division of %f and %f is:   %12.8f \n\n", a, b, result);

    return 0;
}
