/* Sample program to calculate simple intereste rate*/
#include <stdio.h>

int main()
{
    int year, period;
    float amount, value, inrate;
    inrate = 0.11;
    year = 0;

    printf("enter principle amount and number of years: \n\n");
    scanf("%f %d", &amount, &period);
    printf("\nYear\tAmount\n");

    while (year <= period)
    {
        if (year == 0)
        {
            year++;
            continue;
        }
        else
        {
            value = amount + (inrate * amount);
            printf("%2d    %8.2f\n", year, value);

            year = year + 1;
            amount = value;
        }
    }
    return 0;
}
