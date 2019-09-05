#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    int numbers;
    while (std::cin >> numbers && numbers != 42)
    {
        std::cout << numbers << " ";
    }
    return 0;
}