#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    int ia[]={0,2,4,6,8};
    int last = *(ia +4 );
    std::cout << last << " ";
    last = *ia +4;
    std::cout << last << std::endl;
    return 0;
}