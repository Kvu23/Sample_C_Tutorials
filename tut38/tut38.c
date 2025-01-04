//  find area of circle  and traingle

#include <stdio.h>
#define PI 3.14

int main(void)
{
    float radius, Area_Circle, base, height, Area_Triangle;

    printf("enter the value of base & height:  \n");
    scanf("%f  %f", &base, &height);

    printf("\nEnter the radius of Circle : ");
    scanf("%f", &radius);

    Area_Circle = (base * height) / 2;
    printf("area of triangle is: %f", Area_Circle);

    Area_Triangle = PI * radius * radius;
    printf("\n Area of Circle : %f", Area_Triangle);

    return 0;
}
