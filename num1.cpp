
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int i = 42;
    double I = 42.001;
    std::cout << i + I << std::endl;
    auto item = i + I;
    std::cout << item << std::endl;
}