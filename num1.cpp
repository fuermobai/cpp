#include <iostream>
/*
list numbers between n1 and n2 (n2>n1)
 */
int main()
{
    int n1 = 0,n2 = 0;
    std::cin >> n1 >> n2;
    for(int i = n1+1;i < n2 ;++i)
        std::cout << i << std::endl;
        //std::cout << "输出内容" << std::endl;
    //std::cout << sum << std::endl;
    return 0;
}