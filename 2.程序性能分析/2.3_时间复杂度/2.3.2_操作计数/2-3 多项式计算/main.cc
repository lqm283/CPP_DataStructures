/**
 *  小节： 2.3.2_操作计数
 *  程序： 2-3 多项式计算
*/

#include <iostream>
using namespace std;


template <typename T>
T polyEval(T coeff[], int n, const T &x){
    //计算n阶多项式在点x处的值，系数为coeff[0:n]
    T y = 1,value = coeff[0];
    for (int i = 1; i <= n; i++)
    {
        //加上下一项
        y *= x;
        value += y * coeff[i];

    }
    return value;

}


int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3};

    cout << polyEval(a,2,2) << std::endl;

    return 0;
}
