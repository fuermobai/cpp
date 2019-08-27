//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>
//练习3.33
int main()
{
    unsigned scores[11];//当scores没有初始化时，其结果会出现不可预知的结果，当然其中包含了正确结果，但是没有覆盖的情况中，尚未测试，但是已经不满足实际使用了
    unsigned grade;
    while (std::cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade/10];
        }
    }
    for (auto i : scores)
    {
        std::cout << i << " ";
    }
    return 0;
}
        