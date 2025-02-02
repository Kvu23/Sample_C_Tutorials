#include <stdint.h>
#include <stdio.h>

#define HEART_RATE_BPS ((uint8_t)220)

int main(int argc, char const *argv[])
{
    /* code */
    uint8_t age = 0;
    uint8_t Max_Heartrate = 0;
    printf("Enter your age: ");
    scanf("%hhu", &age);

    Max_Heartrate = (HEART_RATE_BPS - age);
    printf("Your maximum heart rate is %d\n", Max_Heartrate);

    return 0;
}
