#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    std::string str{},tmpstr1{},tmpstr2{};
    unsigned cnt = 0,tmpcnt = 0;
    std::cin >> str;
    while (std::cin >> str)
    {
        if (str == tmpstr1)
        {
            ++cnt; 
        }
        else
        {
            if (tmpcnt < cnt)
            {
                tmpcnt = cnt;
                tmpstr2 = tmpstr1;
            }
            cnt = 1;
        }
        tmpstr1 = str;
    }
    if (tmpcnt == 1)
    {
        std::cout << "无任何单词连续出现" << std::endl;
    }
    else
    {
        std::cout << tmpstr2 << "连续出现次数最多，次数为：" << tmpcnt << std::endl;
    }
    return 0;
}