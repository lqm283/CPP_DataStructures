/**
 *  小节： 1.3.2 处理异常
 *  程序： 1-9 捕捉一个类型为char*的异常
*/
#include <iostream>
using namespace std;

int abc(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        throw "All paremeters should be > 0";

    return a + b * c;
}

int main(int argc, char const *argv[]) {
    try {
        { cout << abc(2, 0, 4) << endl; }
    } catch (const char *e) {
        cout << "The paremeters to abc were 2, 0, and 4" << endl;
        cout << "An exception has been thrown" << endl;
        cout << e << endl;
        return 1;
    }

    return 0;
}
