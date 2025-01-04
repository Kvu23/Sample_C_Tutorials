// program for addition substraction multiplication and division using switch case //

#include <stdio.h>
int main()

{
    float a, b, c;
    int n;

    printf("******************wel come to the menu of mathematics operation***************** \n");
    printf(" 1. addition \n");
    printf(" 2. substraction \n");
    printf(" 3. multiplication \n");
    printf(" 4. division \n");
    printf(" 5. invalid choice \n\n\n\n");

    printf("please enter your choice between 1-5 for operation:   ");
    scanf("%d", &n);

    fflush(stdin);
    switch (n)
    {
    case 1:
        printf("enter value of a b:   ");
        scanf("%f %f", &a, &b);
        c = a + b;
        printf("addition of a and b is %.2f \n", c);
        break;
    case 2:
        printf("enter value of a b:   ");
        scanf("%f %f", &a, &b);
        c = a - b;
        printf("substraction of a and b is %.2f \n", c);
        break;
    case 3:
        printf("enter value of a b:   ");
        scanf("%f %f", &a, &b);
        c = a * b;
        printf("multiplication of a and b is %.2f \n", c);
        break;
    case 4:
        printf("enter value of a b:   ");
        scanf("%f %f", &a, &b);
        c = a / b;
        printf("division of a and b is %.2f \n", c);
        break;
    case 5:
        printf("invalid choice \n");
    }
    return 0;
}
