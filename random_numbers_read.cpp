/*读取1000万个随机数程序*/

#include <ctime>
#include <iostream>

const int MAXN = 10000000;
int numbers[MAXN];

void scanf_read(){
    freopen("data.txt", "r", stdin);
    for (size_t i = 0; i < MAXN; ++i)
    {
        std::cin >> numbers[i];
    }
}

void cin_read(){
    freopen("data.txt", "r", stdin);
    std::ios::sync_with_stdio(false);
    for (size_t i = 0; i < MAXN; ++i)
    {
        std::cin >> numbers[i];
    }
}
int main(int argc, const char** argv) {
    int start = clock();
    cin_read();
    printf("%.5lf\n",double(clock() - start)/CLOCKS_PER_SEC);
    return 0;
}