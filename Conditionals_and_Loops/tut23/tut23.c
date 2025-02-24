/*sample programs for sales person commission calculator*/
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    /* code */
    float sales, commission;
    bool flag = true;
    while (flag)
    {
        printf("Enter the sales amount in dollars (-1 to end): ");
        scanf("%f", &sales);
        if (sales == -1)
        {
            flag = false;
            break;
        }
        else
        {
            commission = 200 + sales * 0.09;
            printf("Salary is: $%.2f\n", commission);
        }
    }

    return 0;
}
