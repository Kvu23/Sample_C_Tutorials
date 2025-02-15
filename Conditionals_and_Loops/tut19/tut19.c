
/* Sample program to count number of passes and fails*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int passes = 0, fails = 0, student = 1, result;

    while (student <= 10)
    {
        printf("Enter result (1 = pass, 2 = fail): ");
        scanf("%d", &result);
        if (result == 1)
        {
            passes++;
        }
        else
        {
            fails++;
        }
        student++;
    }
    printf("Passed: %d\nFailed: %d\n", passes, fails);
    
    if (passes > 8)
    {
        printf("Bonus to instructor!\n");
    }
    return 0;
}
