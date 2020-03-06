/**
 *  小节： 1.7.3_C++递归函数
 *  程序： 1-30 累加数组元素a[0:n-1]
*/

#include <iostream>

template <typename T>
T rSum(T a[], int n){
    if(n > 0){
        return rSum(a, n-1) + a[n-1];
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    int a[3] = {1,2,3};
    std::cout << rSum(a,3) << std::endl;
    return 0;
}
