/* Arithmatic maths operation using function */
#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main()
{
    float a, b, addition, substraction, multiplication;
    float division;
    printf("please enter value of two numbers:   ");
    scanf("\n%f  %f", &a, &b);
    addition = add(a, b);
    substraction = sub(a, b);
    multiplication = mul(a, b);
    division = div(a, b);
    printf("addition is= %f\n", addition);
    printf("substraction is = %f\n", substraction);
    printf("multiplication is = %f\n", multiplication);
    printf("division is =%f \n", division);

    return 0;
}

float add(float a, float b)
{
    float result1;
    result1 = a + b;
    return result1;
}

float sub(float a, float b)
{
    float result2;
    result2 = a - b;
    return result2;
}

float mul(float a, float b)
{
    float result3;
    result3 = a * b;
    return result3;
}

float div(float a, float b)
{
    float result4;
    result4 = (float)a / b;
    return result4;
}
