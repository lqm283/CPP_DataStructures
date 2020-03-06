/**
 *  小节： 1.7.3_C++递归函数
 *  程序： 1-30 累加数组元素a[0:n-1]
*/

#include <iostream>

template <typename T>
T sum(T a[], int n){
    T theSum = 0;
    for (int i = 0; i < n; i++)
    {
        theSum += a[i];
    }
    return theSum;
}

int main(int argc, char const *argv[]) {
    int a[3] = {1,2,3};
    std::cout << sum(a,3) << std::endl;
    return 0;
}
