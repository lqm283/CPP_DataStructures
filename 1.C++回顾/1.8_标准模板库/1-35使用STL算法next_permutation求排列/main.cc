/**
 *  小节： 1.8_标准模板库
 *  程序： 1-34 计算数组元素a[0:n-1]的乘积
*/

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
void permutations(T list[], int k, int m){
    do
    {
        copy(list, list+m+1, std::ostream_iterator<T>(std::cout,""));
        std::cout << std::endl;
    } while (std::next_permutation(list,list+m+1));

}

int main(int argc, char const *argv[]) {
    int a[3] = {1, 2, 3};
    permutations(a, 0,2);
    return 0;
}
