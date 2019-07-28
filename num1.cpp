
#include <iostream>
#include "./Sales_item.h"
/*

 */
int main()
{
    int ival = 1024;
    int &refVal = ival;// refVal 是 ival 的新名字，也即refVal是ival的引用。
    std::cout << ival << " " << refVal << std::endl;
    //int &refVal2;
    refVal = 2;//可以通过引用给原对象赋值，即2传递给引用名 refVal 然后传递给实际对象ival，ival的值为2
    int ii = refVal;//也可以使用引用给别的对象赋值，ii被初始化为ival的值
    std::cout << refVal << " " << ii << std::endl;
    return 0;
}