/**
 *  小节： 1.7.3_C++递归函数
 *  程序： 1-29 计算n!的递归函数
*/

#include <iostream>

int factorial(int n) {
    //计算n！
    if (n <= 1) {
        return 1;
    } else {
        return (n * factorial(n - 1));
    }
}

int main(int argc, char const *argv[]) {
    std::cout << factorial(3) << std::endl;
    return 0;
}
