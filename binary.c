#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
    int max_exponent = FLT_MAX_EXP;
    int min_exponent = FLT_MIN_EXP;

    printf("Range of powers of 10 in single precision floating-point:\n");
    printf("Smallest negative power of 10: 10^%d\n", min_exponent);
    printf("Largest positive power of 10: 10^%d\n", max_exponent);

    return 0;
}
