#include <iostream>
#include <vector>
#include <string>

bool isPrefix(const std::vector<int> &v1,const std::vector<int> &v2) {
    auto item1 = v1.cbegin(),item2 = v2.cbegin();
    for(;item1 !=v1.cend() && item2 != v2.cend();++item1,++item2){
        if(*item1 != *item2){
            break;
        }
    }
    return item1 == v1.cend() || item2 == v2.cend();
}

int main(int argc, char const *argv[])
{
    std::vector<int> v1{2,1,1,2};
    std::vector<int> v2{0,1,1,2,3,5,8};
    std::cout << (isPrefix(v2,v1) ? "yes\n" : "no\n") << std::endl;
    return 0;
}