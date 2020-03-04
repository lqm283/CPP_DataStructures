/**
 *  小节： 1.2.3 引用参数
 *  程序： 1-3 利用引用参数计算一个表达式
*/
#include <iostream>
using namespace std;


// template<typename T>
// T abc(T a, T b, T c) {
//     return a + b * c;
// }
/*
    使用形参引起的数据拷贝会增加程序运行的时间，如果不用拷贝，
    那么程序就可以跑得快一些，然后就有了引用
 */
template<typename T>
T abc(T &a, T &b, T &c) {
    return a + b * c;
}


int main(int argc, char const *argv[])
{
    int a = 1,b = 2,c = 3;
    float j = 1.1,k = 1.2,l = 1.3;

    int x = abc(a,b,c);
    float y = abc(j,k,l);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}


