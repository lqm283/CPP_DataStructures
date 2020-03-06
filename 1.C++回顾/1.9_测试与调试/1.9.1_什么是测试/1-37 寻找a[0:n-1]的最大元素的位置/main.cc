/**
 *  小节： 1.9.1_什么是测试
 *  程序： 1-37 寻找a[0:n-1]的最大元素的位置
*/

#include <cmath>
#include <iostream>
#include "ill.h"

using namespace std;

template <typename T>
int indexOfMax(T a[], int n) {
    //查找数组a[0:n-1]的最大元素
    if (n <= 0) {
        throw illegalParameterValue("n must be greater than 0");
    }

    int indexofMax = 0;
    for (int i = 1; i < n; i++) {
        if (a[indexofMax] < a[i]) {
            indexofMax = i;
        }
    }
    return indexofMax;
}

int main(int argc, char const *argv[]) {
    int a[] = {4, 3, 9};
    cout << indexOfMax(a, 3) << endl;
    return 0;
}
