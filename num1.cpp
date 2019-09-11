#include <iostream>
#include "Sales_data.h"
#include <string>
#include <cstdlib>
#include <vector>

int main()
{
    unsigned aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0,spaceCnt=0,tabCnt=0,newLineCnt=0,ffCnt=0,flCnt=0,fiCnt=0;
    char ch,prech = '\0';//prech设置为\0的目的是防止和任何输入对象重叠而在数量上计算+1
    //同时对于ff、fl、fi的统计，首先确认前一个字符是f，然后确认紧邻的字符是f、l、i其中之一。这种情况下fff，表示两个ff统计
    while (std::cin >> std::noskipws >> ch)//std::noskipws 可输入空格
    {
        switch (ch)
        {
        case 'a': case 'A':
            ++aCnt;
            break;
        case 'e': case 'E':
            ++eCnt;
            break;
        case 'i': 
            if (prech == 'f')
            {
                ++fiCnt;
            }
        case 'I':
            ++iCnt;
            break;
        case 'o': case 'O':
            ++oCnt;
            break;
        case 'u': case 'U':
            ++uCnt;
            break;
        case 'f':
            if (prech == 'f')
            {
                ++ffCnt;
            }
            break;
        case 'l':
            if (prech == 'f')
            {
                ++flCnt;
            }
            break;
        case ' ':
            ++spaceCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++newLineCnt;
            break;
        default:
            break;
        }
        prech = ch;
    }
    std::cout << "Number of vowel a(A): \t" << aCnt << '\n'
		<< "Number of vowel e(E): \t" << eCnt << '\n'
		<< "Number of vowel i(I): \t" << iCnt << '\n'
		<< "Number of vowel o(O): \t" << oCnt << '\n'
		<< "Number of vowel u(U): \t" << uCnt << '\n'
		<< "Number of space: \t" << spaceCnt << '\n'
		<< "Number of tab char: \t" << tabCnt << '\n'
		<< "Number of new line: \t" << newLineCnt << '\n'
        << "Number of ff: \t" << ffCnt << '\n'
        << "Number of fl: \t" << flCnt << '\n'
        << "Number of fi: \t" << fiCnt << '\n' << std::endl;
    
}