
#include <iostream>
#include "./Sales_item.h"
/*

 */
int global_int;
std::string global_str;
int main()
{
    int local_int;
    std::string local_str;
    std::cout << "local_int number is :" << local_int << "\n" << local_str << std::endl;
    std::cout << "global_int number is :" << global_int << "\n" << global_str << std::endl;
    return 0;
}