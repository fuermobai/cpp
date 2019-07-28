
#include <iostream>
#include "./Sales_item.h"
/*

 */
int main()
{
    int ival = 42;
    int *p = &ival;
    // p 是指向 ival的int型指针，*p代表了取指针p指向的对象（ival）的值
    std::cout << *p << "\t" << p <<std::endl;
    int  *a = p;
    //a为对象p的指针，p本身是指针，其值是p指针指向对象ival的地址，所以*a的值为ival的地址
    std::cout << a << "\t" << &a <<std::endl;
    return 0;
}