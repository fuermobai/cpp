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
int main()
{
    std::string sentence1 = "aaaaaaaa";
    std::string sentence2 = "bbbbbbbb";
    if (sentence1 == sentence2)
    {
        std::cout << "Right" << std::endl;
    }
    else
    {
        std::cout << "Wrong" << std::endl;
    }
    

    std::cout << "==================================" << std::endl;


    //const char ca1[] = "My name is Porco";
    const char *ca1("aaaaaaaaaa");
    //const char ca2[] = "My name is Porco";
    const char *ca2("aaaaaaaaaa");
    auto result = std::strcmp(ca1,ca2);
    if (result == 0)
    {
        std::cout << "ca1 is equal with ca2" << std::endl;
    }
    else if(result > 0)
    {
        std::cout << "ca1 is bigger than ca2" << std::endl;
    }
    else
    {
        std::cout << "ca2 is bigger than ca1" << std::endl;
    }
    return 0;
}
        