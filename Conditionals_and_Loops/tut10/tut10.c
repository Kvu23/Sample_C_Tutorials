// to find sum of marks for subjects and percentage and decide grades ///

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percent;

    printf(" please enter the marks of 5 subjects:  ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percent = (sum * 100) / 500;

    printf(" sum of 5 subjects is: %d \n", sum);
    printf(" percent is :  %f \n", percent);

    if (percent >= 75)
        printf("you have distinction \n");
    else if (percent >= 60 && percent <= 75)
        printf(" you have first class \n");
    else if (percent >= 50 && percent <= 60)
        printf("you have second class \n");
    else if (percent >= 35 && percent <= 50)
        printf(" you have pass class \n");
    else
        printf(" you have failed \n");

    return 0;
}
