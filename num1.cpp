#include <iostream>
/*
Sum of 1 to 10
 */
int main()
{
    int sum = 0,count = 1;
    while(count <=10){
        sum += count;
        ++count;
    }
    std::cout<< sum << std::endl;
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

