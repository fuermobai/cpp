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
    std::vector<int> vec{1,2,3,4,5,6,7,8};
    int a[vec.size()];
    for (size_t i = 0; i < vec.size(); ++i)
    {
        a[i] = vec[i];
    }
    for (auto i : a)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
        