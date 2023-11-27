#include <stdio.h>
#include <math.h>

int main()
{
    double num = 1.0;
    int powerOfTen = 0;

    // for largest positive power
    while (isfinite(num))
    {
        num *= 10.0;
        powerOfTen++;
    }

    printf("largest power of double precision floating point is 10^%d \n", powerOfTen - 1);

    num = 1.0;
    powerOfTen = 0;

    // for smallest negative power

    while (num != 0.0)
    {
        num /= 10.0;
        powerOfTen--;
    }

    printf("smallest power of single precision floating point is 10^%d\n", powerOfTen + 1);

    return 0;
}
