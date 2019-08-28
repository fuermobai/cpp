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
    int numbers[] = {0,1,2,3,4,5,6};
    std::vector<int> vec(std::begin(numbers),std::end(numbers));
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
        