#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    /* code */
    int min, max;
    printf("Enter the minimum number: ");
    scanf("%d", &min);
    printf("Enter the maximum number: ");
    scanf("%d", &max);
    printf("The minimum number is: %d\n", min);
    printf("The maximum number is: %d\n", max);


    srand(time(0)); /* seed random number generator */

    /* generate random number between 1 and 100: */
    size_t random_number = rand();
    printf("Random number is: %lu\n", random_number);
    
    random_number = (rand() % (max -min) + min); /* random number between 1 and 100 */
    printf("Random number between %d and %d is: %lu\n", min, max,random_number);

    return 0;
}
