
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int i = 0,&r = i;
    auto a = r;
    const int ci = i,&cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    
    const auto f = ci;
    auto &g = ci;
    auto &h = 42;
    const auto &j = 42;
    auto k = ci,
}