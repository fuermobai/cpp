//Author : Porco Rosso 
//Mail : fuermobai@gmail.com
#include <iostream>
#include "./Sales_item.h"
#include <cstdlib>
#include <typeinfo>
#include <cctype>
#include <vector>

int main()
{
    unsigned buf_size = 1024;
    int ia[buf_size];//定义错误，buf_size不是常量
    int ia[4*7-14];//正确
    int ia[txt_size()];//txt_size()的返回值要在它执行之后才有
    char st[11] = "fundamental";//不正确，长度应为12而不是11

    return 0;
}