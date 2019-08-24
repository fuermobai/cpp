
#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    std::vector<std::string> numbers{"hello","my","name","is","Porco","Rosso"};
    //std::vector<std::string>::iterator i;
    for (auto i = numbers.cbegin(); i != numbers.cend(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
    return 0;
}