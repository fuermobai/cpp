//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>
#include <cstring>
//练习3.33
int abss(int num)
{
    if (num > 0)
    {
        return num;
    }
    return -num;
}
int main()
{
    int inputnum;
    int result;
    std::cout << "Input number :" << std::endl;
    std::cin >> inputnum ;
    result = abss(inputnum);
    std::cout << "abs result is :" << result << std::endl;
    return 0;
}
        