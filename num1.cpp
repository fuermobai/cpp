
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
/*

 */
int main()
{
    int i = 42;
    int *p;
    int *&r = p;// r是指针p的引用，所以r的类型是int类型的*指针引用

    r = &i;
    *r = 0;

}