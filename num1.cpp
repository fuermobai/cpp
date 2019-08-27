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
    std::vector<unsigned> numbers(11,0);
    unsigned grade;
    while (std::cin >> grade)
    {
        if (grade <= 100)
        {
            ++*(numbers.begin()+grade/10);//使用迭代器代替容器对象的下标，是一种较为简单的做法（？）
        }
    }
    for (auto &i : numbers)
    {
        std::cout << i << " ";
    }
    return 0;
}