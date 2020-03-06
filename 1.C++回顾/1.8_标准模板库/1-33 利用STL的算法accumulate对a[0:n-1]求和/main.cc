/**
 *  小节： 1.8_标准模板库
 *  程序： 1-33 利用STL的算法accumulate对a[0:n-1]求和
*/

#include <iostream>
#include <numeric>


template <typename T>
T sum(T a[], int n){
    //返回数组a[0:n-1]的累积和
    T theSum = 0;
    return std::accumulate(a, a+n, theSum);
}


int main(int argc, char const *argv[])
{
    int a[3] = {1,2,3};

    std::cout << sum(a, 3) << std::endl;

    return 0;
}



