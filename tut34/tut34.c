/* solution of a quadratic equation ax^2+bx+c=0 */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;
    printf("please enter value of a b and c:  ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("\n\n roots are imagenary \n:  ");
    }
    else
    {
        root1 = (-b + sqrt(b * b - 4 * a * c) / 2 * a);
        root2 = (-b - sqrt(b * b - 4 * a * c) / 2 * a);
        printf(" \n\n root1 = %f \n\n root2 = %f \n", root1, root2);
    }
    return 0;
}
