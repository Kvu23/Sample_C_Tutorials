/* print sum of harmonic series */
#include <stdio.h>
int main()
{
    int n;
    float i = 0, sum = 0;

    printf("Enter the value of series : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 1 / i;
    }
    printf("The Answer is : %f\n", sum);
    return 0;
}
