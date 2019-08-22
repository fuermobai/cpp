//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>

int main()
{
    int number;
    std::vector<int> numbers;
    while (std::cin >> number)
    {
        numbers.push_back(number);
    }
    for (auto i = 0; i < numbers.size(); ++i)
    {
        std::cout << numbers[i] ; 
    }
    std::cout << "\n" ;
}