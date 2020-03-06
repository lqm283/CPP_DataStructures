#include <iostream>
#include "currency.h"
#include <exception>


int main(int argc, char const *argv[])
{
    currency g,h(plus,3,50),i,j;

    //使用两种形式的setValue来赋值
    g.setValue(minus,2,25);
    i.setValue(-6.45);

    //调用成员函数add和output
    j = h.add(g);
    h.output();
    std::cout << " + " ;
    g.output();
    std::cout << " = ";
    j.output();
    std::cout << std::endl;

    //连续两次调用成员函数add
    j = i.increment(g).add(h);

    //测试异常
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

