
#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    std::vector<int> numbers;
    int number,result;
    while (std::cin >> number)
    {
        numbers.push_back(number);
    }
    std::cout << numbers.size() << std::endl;
    for (auto i = 0; i < numbers.size(); ++i)
    {
        result += (numbers[i] + numbers[numbers.size()-1-i])/2;//根据高斯公式得出最终结果，要除以2
    }
    std::cout << result << std::endl;
}