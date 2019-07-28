
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;
    std::cout << p1 << "\t" << p2 << "\t" << p3 << std::endl;
    // 0 0 0
    std::cout << *p1 << "\t" << *p2 << "\t" << *p3 << std::endl;
    // [1]  随机值  core dumped
    return 0;
}