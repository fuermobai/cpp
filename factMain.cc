#include "Chapter6.h"

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i != 10; ++i)
    {
        std::cout << cycle() << " ";
    }
    std::cout << std::endl;
    return 0;
}