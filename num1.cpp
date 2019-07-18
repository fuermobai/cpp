#include <iostream>
/*
list numbers between n1 and n2 (n2>n1)
 */
int main()
{
    int sum = 0,val = 0;
    //std::cin >> n1 >> n2;
    while (std::cin >> val)
    {
        sum += val;
        std::cout << sum << std::endl;
    }
    //std::cout << sum << std::endl;
    return 0;
}