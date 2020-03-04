/**
 *  小节： 1.4.5 二维数组
 *  程序： 1-10 为一个二维数组分配存储空间
*/
#include <cstdio>
#include <iostream>
using namespace std;

template <typename T>
bool make2dArray(T **&x, int nemberOfRows, int nemberOfColumns) {
    //创建行指针
    x = new T *[nemberOfRows];
    //为每一行分配空间
    for (int i = 0; i < nemberOfColumns; i++) {
        x[i] = new T[nemberOfColumns];
    }
}

int main(int argc, char const *argv[]) {
    int **x;
    try {
        make2dArray(x, 5, 5);
    } catch (bad_alloc) {
        cerr << "Could not create 2D array" << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            x[i][j] = i + j;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("\r\n");
        for (int j = 0; j < 5; j++) {
            printf("x[%d][%d] = %d   ", i, j, x[i][j]);
        }
    }
    printf("\n");

    return 0;
}
