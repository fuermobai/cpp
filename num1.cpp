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
long fact(long num)
{
    long ret = 1;
    while (num > 1)
    {
        ret *= num--;  
    }
    return ret;
}
int main()
{
    long inputnum;
    long result;
    std::cout << "Input number :" << std::endl;
    std::cin >> inputnum ;
    result = fact(inputnum);
    std::cout << "fact result is :" << result << std::endl;
    return 0;
}
        