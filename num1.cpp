
#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    std::vector<int> numbers{1,2,3,4,5,6,7,8,9,0};
    for (auto i = numbers.begin(); i != numbers.end(); ++i)
    {
        *i *= 2;
    }
    for (auto item : numbers)
    {
        std::cout << item << " ";
    }
    return 0;
}