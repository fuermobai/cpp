
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int i = 42;
    std::cout << i << std::endl;
    int &r1 = i;
    const int &r2 = i;
    r1 = 0;
    std::cout << i << std::endl;
    //r2 = 0; r2是const int 类型引用，无法改变i的值
    //std::cout << i << std::endl;
}