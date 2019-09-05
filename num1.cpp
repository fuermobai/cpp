#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    std::vector<int> numbers{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int result;
    for (auto i : numbers)
    {
        result = (i%2 == 0) ? (i*2) : i;
        std::cout << result << " ";
    }
    return 0;
}