#include <iostream>
/*
Sum of 5 to 100
 */
int main()
{
    int sum = 0,count = 0;
    std::cin >> sum >> count;
    while(count-sum >1){// count - sum > 1 是因为不打印出两个数的边界，1是不打下界，仅大于号 >是不打印上界
        --count;
        std::cout << count << std::endl;
    }
//    std::cout<< sum << std::endl;
    return 0;
}
//    std::cout << "Hello,World" << std::endl;
//    int v1 = 0,v2 = 0;
//    std::cin >> v1 >> v2;
//    std::cout << "The sum of " << v1 << " and " << v2 << " is "<< v1 +v2 << "两数之积为：" << v1 * v2 << std::endl;
//    
//    std::cout << "/*";
//    std::cout << "*/";
//    std::cout << /* "*/" */";
//    std::cout << /* "*/" /* "/*" */;

