#include <iostream>
#include "./Sales_item.h"
/*
list numbers between n1 and n2 (n2>n1)
 */
int main()
{
    Sales_item item1,item2;
    std::cin >> item1 >> item2;
    //std::cout << item1 + item2 << std::endl;
    if (item1.isbn() == item2.isbn())
    {
        std::cout << item1 + item2 << std::endl;
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same ISBN" <<std::endl;
        return -1;
    }
}

