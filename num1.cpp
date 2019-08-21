//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>

int main()
{
    std::string s("Hello World!!!");
    for (auto &i : s)
    {
        i = toupper(i);
    }
    std::cout << s << std::endl;
}