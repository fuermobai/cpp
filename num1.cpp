//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>
//练习3.33
int main()
{
    int arr[]={0,100,2,300,4,5,6,7,8,9};
    int *p=arr;
    ++p;
    int *p1 = p+3;//原来定义指向数组某一单元的指针可以这样初始化，而不是每次都是 int *p1 = &p[4]
    std::cout << *p1 << std::endl;
    return 0;
}
        