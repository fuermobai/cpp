
#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>


int main()
{
    Sales_data book1,book2;
    // 输入每本书的书号、售卖数量、售卖单价
    std::cin >> book1.bookNo >> book1.units_sold >> book1.price;
    std::cin >> book2.bookNo >> book2.units_sold >> book2.price;
    // 计算每本书的收入
    book1.revenue = book1.units_sold * book1.price;
    book2.revenue = book2.units_sold * book2.price;
    // 只有当书号一样时，即同一本书时，才计算总价格
    if (book1.bookNo == book2.bookNo)
    {
        unsigned totalCNT = book1.units_sold + book2.units_sold;
        double totalrevenue = book1.revenue + book2.revenue;
        std::cout << book1.bookNo << " " << totalCNT << " " << totalrevenue << " ";
        if (totalCNT != 0)
        {
            std::cout << totalrevenue/totalCNT << std::endl;
        }
        else
        {
            std::cout << "(没卖出去，草T -T)" << std::endl;
        }
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
    return 0;
}