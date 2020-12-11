#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
    int start = clock();//配合15行计算本程序运行时间
    srand((unsigned long)time(NULL));
    unsigned long i,j;
    for (size_t i = 0; i < 10000000; ++i)//生成一千万个无符号随机数
    {
        j = rand();
        std::cout<< /*"随机数: "<<*/  j << std::endl;
    }
//此程序生成文件大小约104MB    
    printf("%.5lf\n",double(clock()-start)/CLOCKS_PER_SEC);//配合6行计算本程序运行时间
    return 0;
}
