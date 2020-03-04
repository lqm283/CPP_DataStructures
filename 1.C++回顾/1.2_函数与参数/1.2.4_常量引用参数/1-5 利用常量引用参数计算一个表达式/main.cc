/**
 *  小节： 1.2.4 常量引用参数
 *  程序： 1-3 利用利用常量引用参数计算一个表达式
*/
#include <iostream>
using namespace std;

// template<typename T>
// T abc(T &a, T &b, T &c) {
//     return a + b * c;
// }
/* 上面的模板函数在传入字面常量的时候就懵逼了，于是有了常量引用参数 */
template <typename T>
T abc(const T &a, const T &b, const T &c) {
    return a + b * c;
}
/* 这样就可以传入字面常量了 */

int main(int argc, char const *argv[]) {
    int x = abc(1, 2, 3);
    float y = abc(1.1f, 1.2f, 1.3f);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
