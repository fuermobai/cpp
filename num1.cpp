
#include <iostream>
#include "./Sales_item.h"
/*
list numbers between n1 and n2 (n2>n1)
 */
int main()
{
    Sales_item Curritem,Newitem;
    if (std::cin >> Curritem)//使用if语句来判断当前输入是否为真，真则继续，假则跳出
    {
        //int count = 1;//当前输入的第一个内容计数
        while (std::cin >> Newitem) //输入新内容，并且与前一条输入内容进行比较
        {
            if (Curritem.isbn()==Newitem.isbn())// 判断是否相同内容
            {
                Curritem += Newitem;
            }
            else
            {
                std::cout << Curritem /* << count */ << std::endl;
                Curritem=Newitem; //不是相同内容则将Curritem替换为最新内容
                //count=1; //重置count为1，重新计数开始
            }
        }
        std::cout << Curritem << std::endl;//将最后一个内容和次数打印，
                                               //且最后一个内容是当前输入的内容，所以是Curritem
    }
    return 0;
}

