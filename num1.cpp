//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>

int main()
{
    std::string s("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s)
    {
        if (ispunct(c))
            ++punct_cnt;
    }
    std::cout << punct_cnt << " punctuation characters in " << s << std::endl;
    
}