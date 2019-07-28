
#include <iostream>
#include "./Sales_item.h"
/*

 */
int reused = 42;
int main()
{
    int unique = 0;
    std::cout << reused << "\t" << unique << std::endl;
    //在内部定义reused前输出的为全局的reused值
    int reused = 0;
    std::cout << reused <<  "\t" << unique << std::endl;
    //在main函数内部的作用域输出，reused为0
    std::cout << ::reused << "\t" << unique <<std::endl;
    //reused 前添加了::表示覆盖了当前的作用域规则，即回到了全局作用域，因为全局作用域没有自己的名字，故::前面为空
    return 0;
}