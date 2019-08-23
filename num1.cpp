
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
        if(i!=numbers.size()-1)
        {
        std::cout << numbers[i] + numbers[i+1] << std::endl;//输出所有相邻元素之和
        }
        std::cout << numbers[i] << "和" << numbers[numbers.size()-1-i] << "之和为：" << numbers[i] + numbers[numbers.size()-1-i] << "   ";
        result += (numbers[i] + numbers[numbers.size()-1-i])/2;
    }
    std::cout << "输出所有数之和：" << result << std::endl;//根据高斯公式得出最终结果，要除以2
}