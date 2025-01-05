/* to record data of person information */

#include <stdio.h>

struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    double salary;
};
int main()
{
    struct personal persion;
    printf("\n input values:  \n");
    scanf("%s %d %s %d %lf", persion.name, &persion.day, persion.month, &persion.year, &persion.salary);
    fflush(stdin);

    printf("%s %d %s %d %f \n", persion.name, persion.day, persion.month, persion.year, persion.salary);

    return 0;
}
