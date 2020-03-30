#ifndef CHAPTER6_H
#define CHAPTER6_H
#include <iostream>

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

#endif // !CHAPTER6.H