/**
 *  小节： 1.9.1_什么是测试
 *  程序： 1-36 计算并输出一个二次方程ax^2+bx+c的根
*/

#include <cmath>
#include <iostream>
using namespace std;

void outputRoots(const double &a, const double &b, const double &c) {
    //计算和输出二次方程的根
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double sqrtd = sqrt(d);
        cout << "There are two real roots" << (-b + sqrtd) / (2 * a)
             << " and " << (-b - sqrtd) / (2 * a) << endl;
    } else if (d == 0) {
        cout << "There is only one distinct root" << -b / (2 * a) << endl;
    } else {
        cout << "The roots are complex" << endl
             << "The real part is" << -b / (2 * a) << endl
             << "The imaginary part is " << sqrt(-d) / (2 * a) << "i" << endl;
    }
}

int main(int argc, char const *argv[]) {
    outputRoots(1, 2, 2);
    return 0;
}
