#include <iostream>
#include <ctime>
#include <cstdlib>
int main()
{
    int start = clock();
    srand((unsigned long)time(NULL));
    long i,j;
    for (size_t i = 0; i < 10000000; ++i)
    {
        j = rand();
        std::cout<< /*"随机数: "<<*/  j << std::endl;
    }
    
    printf("%.5lf\n",double(clock()-start)/CLOCKS_PER_SEC);
    return 0;
}
