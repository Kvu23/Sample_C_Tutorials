#include <math.h>
#include <stdio.h>
#include <stdint.h>

union floattoBytes
{
    float Fval;
    uint8_t Data[4];
};

int main(int argc, char const *argv[])
{
    /* code */
    union floattoBytes fb;
    float_t Signal_Value;

    printf("Enter a signal value: ");
    scanf("%f", &Signal_Value) ;

    fb.Fval = Signal_Value;
    printf("Float Value: %f\n", fb.Fval);

    printf("Byte 0: 0x%02X\n", fb.Data[3]);
    printf("Byte 1: 0x%02X\n", fb.Data[2]);
    printf("Byte 2: 0x%02X\n", fb.Data[1]);
    printf("Byte 3: 0x%02X\n", fb.Data[0]);

    return 0;
}
