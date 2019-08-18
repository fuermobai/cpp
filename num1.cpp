
#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>

int main()
{
    std::string line;
    while (getline(std::cin,line,' '))//通过一个空格，控制输入内容为第一个空格前的内容
    {
        if (!line.empty())
            std::cout << line << std::endl;
    }
    return 0;
}