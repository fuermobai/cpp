
#include <iostream>
#include "./Sales_item.h"
/*

 */
int main()
{
    int i = 100,sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += 1;  
        std::cout << i << std::endl;//每次循环必输出此语句，无法仅输出最终的i的值
    }
    std::cout << i << " " << sum << "\n" << std::endl;
    return 0;
}