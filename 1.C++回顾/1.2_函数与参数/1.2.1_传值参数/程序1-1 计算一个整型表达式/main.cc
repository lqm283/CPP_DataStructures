/**
 *  小节： 1.2.1 传值函数
 *  程序： 1-1 计算一个整型表达式
*/
#include <iostream>
using namespace std;

/**
 *  该程序用来计算表达式a + b * c，其中a，b，c是形参，
 *  在运行时会将实参复制给形参，对形参的运算不会影响到
 *  实参的内容
*/
int abc(int a, int b, int c){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return a + b * c;
}


int main(int argc, char const *argv[])
{
    /* x和y是实参 */
    int x = 2, y = 3;

    /* 实参的值是确定的,在调用函数的过程中，实参会被复制给形参。 */
    int z = abc(2,x,y);
    /* 当函数结束时，形参类型的析构函数负责释放形参 */

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}


/**
 *  输出：
 *  a = 2
 *  b = 2
 *  c = 3
 *  x = 2
 *  y = 3
 *  z = 8
 *
 *
 *
*/

