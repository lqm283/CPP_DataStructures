
#include "currency.h"

int main(int argc, char const *argv[]) {
    currency g, h(plus, 3, 50), i, j;

    //使用两种形式的setValue来赋值
    g.setValue(minus,2,25);
    i.setValue(-6.45);

    //调用成员函数add和output
    j = h + g;

    std::cout << g << " + " << g << " = " << j << std::endl;

    //连续两次调用成员函数add
    j = i + g + h;
    std::cout << i << " + " << g << " + " << h << " = " << j << std::endl;

    std::cout << "Increment " << i << " by " << g << " and then add " << h << std::endl;
    j = (i += g) + h;

    std::cout << "Result is " << j << std::endl;

    std::cout << "Increment object is " << i << std::endl;

    std::cout << "Attempting to initialize with cents = 152" << std::endl;
    try
    {
        i.setValue(plus,3,152);
    }
    catch(const char *e)
    {
        std::cout << "Caught thrown exception" << std::endl;
        std::cout << e << std::endl;
    }

    return 0;
}
