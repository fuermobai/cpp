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
        if (ispunct(i))//此处使用了替换方案，也可以直接判断是否是标点后，将其合到一个string对象中去
        {
            i = ' ';//空字符，是使用单引号' ‘ 而不是双引号" "
        }
    }
    std::cout << s << std::endl;
}