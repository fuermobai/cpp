//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>
//练习3.32
int main()
{
    int numbers[10];
    int numbers1[10];
    for (size_t i = 0; i < 10; i++)
    {
        numbers[i] = i;
    }
    for (size_t i = 0; i < 10; i++)
    {
        numbers1[i] = numbers[9-i];
    }
    for (auto i : numbers1)
    {
        std::cout << i << " ";
    }
    return 0; 
}