<<<<<<< HEAD
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
        
=======
#include <iostream>
#include <vector>
#include <string>

size_t cycle()
{
    static size_t num1 = 0;
    return num1++;
}

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i != 10; ++i)
    {
        std::cout << cycle() << " ";
    }
    std::cout << std::endl;
    return 0;
}
>>>>>>> 61c2d2763bdc2517cf9a5f85dd2956cefea0a2c7
