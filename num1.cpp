#include <iostream>
/*
list numbers between n1 and n2 (n2>n1)
 */
void print_range(int lo,int hi)
{
    if (lo > hi)
    {
        print_range(hi,lo);
        return;
    }
    while (lo <= hi)
    {
        std::cout << lo << std::endl;
        ++lo;
    }
}
int main()
{
    int low,high;
    std::cout << "Please input two numbers : " << std::endl;
    std::cin >> low >> high;

    print_range(low,high);
    return 0;
}
