
#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>

int main()
{
<<<<<<< HEAD
    int i = 42;
    double I = 42.001;
    std::cout << i + I << std::endl;
    auto item = i + I;
    std::cout << item << std::endl;
=======
    std::string line;
    while (getline(std::cin,line,' '))//通过一个空格，控制输入内容为第一个空格前的内容
    {
        if (!line.empty())
            std::cout << line << std::endl;
    }
    return 0;
>>>>>>> 961883f36df787b7c6fda5e2ce0f89f313b5e415
}