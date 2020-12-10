#include <iostream>
#include <ctime>
int main()
{
    int start = clock();
    printf("%.3lf\n",double(clock()-start)/CLOCKS_PER_SEC);
}
