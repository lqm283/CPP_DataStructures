/**
 *  小节： 2.2.2_举例
 *  程序： 2-1 顺序查找
*/

#include <iostream>
using namespace std;


template <typename T>
int sequentialSearch(T a[], int n, const T &x) {
    //在数组a[0:n-1]中查找元素x
    //如果找到，返回该元素的位置，否则返回-1
    int i;
    for (i = 0; i < n && a[i] != x; i++) {
    }
    if (i == n) {
        return -1;
    } else {
        return i;
    }
}


int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3};
    int x = 2;

    cout << sequentialSearch(a,3,x) << endl;

    return 0;
}




