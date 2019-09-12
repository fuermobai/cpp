#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    int cur = 1, max = 0;
    std::string str , maxstr = "" , curstr = "";
    std::vector<std::string> st;
    while (std::cin >> str)//此处将所有输入的string集合到容器st中
    {
        st.push_back(str);
    }

    auto beg = st.begin();//使用while循环可以在循环结束后访问循环控制变量 beg
    while (beg != st.end())//条件是beg 从迭代器的begin走到end-1
    {
        if (*beg == curstr)//判断此时迭代器的取值与前一个string对象是否一致，若一致则cur+1，否则执行else
        {
            ++cur;
        }
        else {
        cur = 1;//cur置零
        curstr = *beg;//并将当前迭代器所指string对象赋值给curstr
        }
        if(cur > max){//判断当前重复数值是否是出现过最大的，若是，则用cur当前重复数替换掉max，并将当前的string对象替换掉maxstr，否则什么都不执行
            max = cur;
            maxstr = curstr;
        }
        ++beg;//迭代器增加
    }
    std::cout << "maxStr: " + maxstr << " " << max << std::endl;
    return 0;
}