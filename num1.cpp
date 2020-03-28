#include <iostream>
#include <vector>
#include <string>

long fact(int val)
{
    long result = 1;
    while (val > 1)
    {
        result *= val--;
    }
    return result;
}
int main(int argc, char const *argv[])
{
    long j = fact(12);
    std::cout << "12! = " << j << std::endl;
    return 0;
}