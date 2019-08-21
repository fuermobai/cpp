//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>

int main()
{
    std::string s("Hello World!!!My name is Porco,which means A 'Red' + 'Pig' in Chinese @-@");
    std::cout << s << std::endl;
    for (auto &i : s)
    {
        if (ispunct(i))
        {
            i = ' ';//空字符，是使用单引号' ‘ 而不是双引号" "
        }
    }
    std::cout << s << std::endl;
}