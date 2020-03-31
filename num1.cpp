#include <iostream>
#include <vector>
#include <string>

void reset(int &val)
{
    val = 0;
}

void yyswap(int &a , int &b)
{
    auto c = a;
    a = b;
    b = c;
}

int main(int argc, const char** argv) {
    int num1,num2;
    std::cin >> num1 >> num2;
    yyswap(num1,num2);
    std::cout << "num1 is " <<  num1 << "\nnum2 is " << num2 << std::endl;
    return 0;
}   