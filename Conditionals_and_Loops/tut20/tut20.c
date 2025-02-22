/*thi is sample programs to calculate powers */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int number1, number2;
    printf("please enter the 2 integer numbers: \n");
    scanf("%d %d", &number1, &number2);

    int power = 1;
    int loop_index = 0;
    while(loop_index < number2)
    {
        power = power * number1;
        loop_index++;
    }
    printf("The result of %d power %d is %d\n", number1, number2, power);
    return 0;
}
