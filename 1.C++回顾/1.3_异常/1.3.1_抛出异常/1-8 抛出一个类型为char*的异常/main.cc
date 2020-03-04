/**
 *  小节： 1.3.1 抛出异常
 *  程序： 1-8 抛出一个类型为char*的异常
*/
#include <iostream>
using namespace std;

int abc(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0)
        throw "All paremeters should be > 0";

    return a + b * c;
}

int main(int argc, char const *argv[]) {
    return 0;
}
