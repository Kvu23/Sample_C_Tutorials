// program to convert temperature conversion //

#include <stdio.h>

#define f_low 0
#define f_max 250
#define step 25

int main()
{
    typedef float real;
    real fh, cs;
    fh = f_low;
    printf(" fh      cs \n\n");
    while (fh <= f_max)
    {
        cs = (fh - 32.0) / 1.8;
        printf(" %5.1f      %7.2f\n\n", fh, cs);
        fh = fh + step;
    }
    return 0;
}
