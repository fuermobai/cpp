#include <iostream>
#include <vector>
#include <string>

void exchangevalue(int * val1,int * val2)
{
    int value;
    value = *val1;
    *val1 = *val2;
    *val2 = value;
}

void exchangenothird(int &a,int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}


int main(int argc, char const *argv[])
{
    int input1 = 0,input2 = 0;
    std::cout << "input two numbers:" << std::endl;
    std::cin >> input1 >> input2 ;
    std::cout << " input1 : " << input1 << " input2 : " << input2 << std::endl;
    //exchangevalue(&input1,&input2);
    exchangenothird(input1,input2);
    std::cout << " new1 is " << input1 << " new2 is " << input2 << std::endl;
    return 0;
}
