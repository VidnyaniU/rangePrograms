#include <stdio.h>


// Write a computer program and run it several times , with varying inputs , to find out the largest and smallest
// integers that can be stored in a given computer

int limitOfInt(int n)
{
    return (1 << n - 1) - 1;
}

// find out largest  and smallest powers of 10 of a single precision floating point that can be stored in a given computer
int limitOfFloat(){
    
}
int main()
{
    int n = 32;
    printf("%d", limitOfInt(n));

    return 0;
}