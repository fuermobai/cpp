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
    std::vector<int> numbers;
    int number;
    while (std::cin >> number)
    {
        numbers.push_back(number);
    }
    //for (auto i : numbers)
    //{
    //    std::cout << i*i << " ";
    //}
    auto tl1 = numbers.begin();
    auto tl2 = numbers.end() - 1;
    //std::cout << (tl1 < tl2) << " " << (numbers.begin() != numbers.end()) << std::endl;
    while ( tl1 < tl2 )
    {
        //std::cout << *tl1+*(tl1 + 1)  << std::endl;
        std::cout << *tl1 + *tl2 << std::endl;
        ++tl1;
        --tl2;
    }
    //std::cout << (tl1 < tl2) << " " << (numbers.begin() != numbers.end()) << std::endl;
    // 之所以不能使用 numbers.begin() != numbers.end() 来作为while循环判断条件，是因为这个条件是一直成立的，即此时while是无限循环，溢出错误

    return 0;
}