/**
 *  小节： 1.8_标准模板库
 *  程序： 1-34 计算数组元素a[0:n-1]的乘积
*/

#include <iostream>
#include <numeric>

template <typename T>
T product(T a[], int n) {
    T theProduct = 1;
    return std::accumulate(a, a + n, theProduct, std::multiplies<T>());
}

int main(int argc, char const *argv[]) {
    int a[3] = {1, 2, 5};
    std::cout << product(a, 3) << std::endl;
    return 0;
}
