<<<<<<< HEAD
#include <cstdio>
=======
>>>>>>> temp
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, const char** argv) 
{
<<<<<<< HEAD
    int start = clock();//配合19行计算本程序运行时间
    srand((int)time(NULL));
    int i,j;
    freopen("newdata.txt","w",stdout);
    for (size_t i = 0; i < 10000000; ++i)//生成一千万个无符号随机数
    {
        j = rand();
        cout<< /*"随机数: "<<*/  j << endl;
    }
//此程序生成文件大小约104MB    
    printf("%.5lf\n",double(clock()-start)/CLOCKS_PER_SEC);//配合8行计算本程序运行时间
    fclose(stdout);
    return 0;
=======
    int start = clock();
    printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);
>>>>>>> temp
}
