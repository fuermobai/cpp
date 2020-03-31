#include <iostream>
#include <vector>
#include <string>

void reset(int &val)
{
    val = 0;
}

int main(int argc, const char** argv) {
    auto nvalue = 0;//实参nvlaue
    std::cin >> nvalue ;
    reset(nvalue);//由于reset函数返回值为void，所以不可以放入标准输入输出流中，此处将实参传递给引用 &val
    std::cout << nvalue << std::endl;
    return 0;
}   