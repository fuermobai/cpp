//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>

int main()
{
    std::string s("Hello World!!!");
    std::cout << s.size() << std::endl;
    //std::string::size_type i = 0;
    //while (i < s.size())
    //{
    //    s[i]='X';
    //    i++;
    //}
    for (decltype(s.size()) i = 0; i < s.size(); ++i)
    {
        s[i] = 'Y';
    }
    
    std::cout << s << std::endl;
    std::cout << s.size() << std::endl;
}