/*Sample program to calculate average miles per gallon*/

#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    /* code */
    float gallons, miles, mile_per_gallon, avg_miles, avg_gallons;
    bool flag = 0;
    while (gallons != -1)
    {
        printf("Enter the number of gallons used -1 to end: ");
        scanf("%f", &gallons);

        if (gallons == -1)
        {
            flag = 1;
            break;
        }
        else
        {
            ;
        }
        printf("Enter the number of miles driven: ");
        scanf("%f", &miles);
        mile_per_gallon = miles / gallons;
        avg_miles += miles;
        avg_gallons += gallons;
        printf("Miles per gallon = %f\n", mile_per_gallon);
    }

    if (flag == 1 && avg_gallons == 0)
    {
        printf("No data entered\n");
        return 0;
    }
    else
    {
        printf("Total average miles per gallon = %f\n", avg_miles / avg_gallons);
    }

    return 0;
}
