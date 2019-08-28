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
    const char* sentence1("aaaaaaaaa");
    const char *sentence2("bbbbbbbbbbb");
    char sentence[100];
    std::strcpy(sentence,sentence1);
    std::strcat(sentence," ");
    std::strcat(sentence,sentence2);
    std::cout << sentence << std::endl;
}
        