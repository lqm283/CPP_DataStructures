/*  重载函数是为了满足目的相同，实现细节不同时不用
    定义多个函数名称的情况而诞生的。
    比如都是打印，一个打印字符串，一个打印数字：
 */
#include <string>
#include <iostream>
using namespace std;



void print(int a){
    cout << a << endl;
}

void print(std::string str){
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    int a = 18;
    string str = "Hello World";

    print(a);
    print(str);

    return 0;
}

