/*读取1000万个随机数程序*/

#include <ctime>
#include <iostream>
#include <fstream>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>//包含linux C下的read函数

const int MAXN = 10000000;
int numbers[MAXN];

void scanf_read(){
    freopen("data.txt", "r", stdin);
    for (size_t i = 0; i < MAXN; ++i)
    {
        std::cin >> numbers[i];
    }
}

void cin_read_nosync(){
    freopen("data.txt", "r", stdin);
    std::ios::sync_with_stdio(false);
    for (size_t i = 0; i < MAXN; ++i)
    {
        std::cin >> numbers[i];
    }
}

const int MAXS = 60*1024*1024;
char buf[MAXS];

void analyse(char *buf,int len = MAXS){
    int i;
    numbers[i=0]=0;
    for (char *p = buf; *p && p-buf < len; ++p)
    {
        if (*p == ' ')
        {
            numbers[++i]=0;
        }
        else
        {
            numbers[i]=numbers[i]*10 + *p - '0';
        }
    }
}

void fread_analysis(){
    freopen("data.txt", "rb", stdin);
    int len = fread(buf,1,MAXS,stdin);
    buf[len] = '\0';
    analyse(buf,len);
}

void read_analyse(){
    int fd =open("data.txt",O_RDONLY);
    int len = read(fd,buf,MAXS);
    buf[len] = '\0';
    analyse(buf,len);
}


int main(int argc, const char** argv) {
    int start = clock();
    //cin_read_nosync();
    //fread_analysis();
    read_analyse();
    printf("%.5lf\n",double(clock() - start)/CLOCKS_PER_SEC);
    return 0;
}