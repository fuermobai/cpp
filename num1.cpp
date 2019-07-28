
#include <iostream>
#include "./Sales_item.h"
/*

 */
int main()
{
    int i;
    int &val = i;
    std::cout << i << " " << val << std::endl;
    return 0;
}