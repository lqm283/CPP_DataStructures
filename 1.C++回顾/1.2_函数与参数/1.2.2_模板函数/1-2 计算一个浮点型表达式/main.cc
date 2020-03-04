/**
 *  小节： 1.2.2 模板函数
 *  程序： 1-2 计算一个浮点型表达式
*/
#include <iostream>
using namespace std;

/* 这个是上一个例子的函数 */
int abc(int a, int b, int c){
    return a + b * c;
}

/* 这个是本例的函数 */
float abc(float a, float b, float c){
    return a + b * c;
}

/**
 *  问题来了，要为一样的操作定义两个不同的函数，略微有点麻烦，不符合简洁之道。
*/


int main(int argc, char const *argv[])
{
    int x = abc(1,2,3);
    float y = abc(1.1f,1.2f,1.3f);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}


