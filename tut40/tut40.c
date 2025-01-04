// swap number without usin third variables and pass by references //

#include <stdio.h>

void swap_numbers(int *num1, int *num2)
{
    int temp_num;

    temp_num = *num1;
    *num1 = *num2;
    *num2 = temp_num;
}

int main()
{
    int a, b;

    printf("Enter two numbers:  \n");
    scanf("%d %d", &a, &b);

    printf("value of a , b before swap is %d    %d \n\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("the value of a, b after swapping is %d , %d\n\n", a, b);

    printf("the value of a, b before swapping pass by reference is %d , %d\n\n", a, b);

    swap_numbers(&a, &b);

    printf("the value of a, b After swapping pass by reference is %d , %d\n\n", a, b);
    return 0;
}
