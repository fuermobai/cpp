#include "Chapter6.h"

long fact(int val)
{
    long result = 1;
    while (val > 1)
    {
        result *= val--;
    }
    return result;
}

int abss(int num)
{
    if (num > 0)
    {
        return num;
    }
    return -num;
}

size_t cycle(void)
{
    static size_t num1 = 0;
    return num1++;
}