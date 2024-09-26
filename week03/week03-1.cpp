/// week03-1.cpp 了解"文法糖" range-based for迴圈 在 2011年的C++才能用!
/// warning: range-based 'for' loops only available with ustd=c++11
/// CodeBlocks-Settings-Compiler 把 -std=c++11 的2011年C++開起來
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c : s){ ///這種簡單好看好寫的FOR迴圈,是2011年的C++開始有
        cout << c << "\n";
    }
}