//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>

int main()
{
    std::string word;
    std::vector<std::string> words;
    while (std::cin >> word)
    {
        words.push_back(word);
    }
    //Linux可以使用Ctrl + D来终止字符输入并输出

    for (auto i : words)//将for循环输出words内容，改为for range输出
    {
        if(!i.empty())
            for (int item = 0; item < i.size(); ++item)
            {
                i[item] = toupper(i[item]);
            }
        std::cout << i << std::endl;
    }
   // for (auto i = 0; i < words.size(); ++i)
   // {
   //     std::cout << words[i] ; 
   // }
   // std::cout << "\n" ;
}