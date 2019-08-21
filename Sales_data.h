#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data
{
    std::string bookNo;// 某本书的书号
    unsigned units_sold = 0; // 某本书的售出数量
    unsigned units_totals = 0;// 某本书的数量
    unsigned totals = 0;// 售书总数量
    double revenue = 0.0;// 金额总收入
    double price = 0;//每种书的单价
};
#endif 