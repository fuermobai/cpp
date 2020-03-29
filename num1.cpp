#include <iostream>
#include <vector>
#include <string>

size_t cycle()
{
    static size_t num1 = 0;
    return num1++;
}

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i != 10; ++i)
    {
        std::cout << cycle() << " ";
    }
    std::cout << std::endl;
    return 0;
}