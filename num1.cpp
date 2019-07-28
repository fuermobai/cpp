
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int i = 42;
    int *pi = &i;
    *pi = *pi * *pi;
    std::cout << i << "\t" << pi << std::endl;
    return 0;
}