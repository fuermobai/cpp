
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int a =3 ,b = 4;
    decltype(a) c = a;//c int
    decltype((b)) d = a;// d int &
    std::cout << "first time " << a << " " << b << " " << c << " " << d << std::endl;
    ++c;
    ++d;
    std::cout << "second time " << a << " " << b << " " << c << " " << d << std::endl;
}