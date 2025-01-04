// to find maximum number using nested if //

#include <stdio.h>

void Find_Max_NestedIf(int a, int b, int c)
{
    if (a >= b)
    {
        if (a >= c)
            printf("%d is the maximum number \n", a);
        else
            printf("%d is the maximum number \n", c);
    }
    if (b >= a)
    {
        if (b >= c)
            printf(" %d is the maximum number  \n", b);
        else
            printf("%d is the maximum number  \n", c);
    }
}

void FindMax_IfElseIf(int no1, int no2, int no3)
{
    if (no1 >= no2 && no1 >= no3)
    {
        printf("%d is the maximum number \n", no1);
    }
    else if (no2 >= no1 && no2 >= no3)
    {
        printf("%d is the maximum number \n", no2);
    }
    else if (no3 >= no1 && no3 >= no2)
    {
        printf("%d is the maximum number \n", no3);
    }
    else
    {
        ;
    }
}

int main()
{
    int a, b, c;
    printf("please enter value of three numbers:    ");
    scanf("%d %d %d", &a, &b, &c);

    Find_Max_NestedIf(a, b, c);
    FindMax_IfElseIf(a, b, c);
    return 0;
}
