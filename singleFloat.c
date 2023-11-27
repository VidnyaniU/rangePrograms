#include <stdio.h>
#include <math.h>

int main()
{
    // for largest positive power
    float num = 1.0f;
    int powerOfTen = 0;

    while (isFinite(num))
    {
        num *= 10.0f;
        powerOfTen++;
    }

    printf("largest power of single precision floating point is 10^%d \n", powerOfTen - 1);

    // for smallest negative power
    num = 1.0f;
    powerOfTen = 0;

    while (num != 0.0)
    {
        num /= 10.0f;
        powerOfTen--;
    }

    printf("smallest power of single precision floating point is 10^%d\n", powerOfTen + 1);

    return 0;
}
