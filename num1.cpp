
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int i = 0,&r = i;
    auto a = r;
    a = 42;
    std::cout << i << " " << a << std::endl;
    const int ci = i,&cr = ci;
    auto b = ci;
    b = 42;
    std::cout << b << " " << ci << std::endl;
    auto c = cr;
    c = 42;
    std::cout << c << " " << cr << " " << ci <<std::endl;
    auto d = &i;
    //d = 42;
    std::cout << d << " " << i << std::endl;
    auto e = &ci;
    e = 42;//常量指针不能再被赋值，只能变动地址
    std::cout << e << " " << ci << std::endl;
    
    const auto f = ci;
    auto &g = ci;
    //auto &h = 42;
    const auto &j = 42;
    auto k = ci,&l = i;
    auto &m = ci,*p = &ci;
    //auto &n =i,*p2 = &ci;
}