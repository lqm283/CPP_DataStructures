/**
 *  小节： 1.5.2 一种不同的描述方法
 *  程序： 1-21 成员函数add和ouput新代码
*/
#include "currency.h"
#include <iostream>
using std::cout;
using std::endl;

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents) {
    //给调用对象赋值
    if (theCents > 99) {
        //美分值太大
        throw "Cents should be < 100";
    }
    amount = theDollars * 100 + theCents;
    if (theSign == minus) {
        amount = -amount;
    }
}

void currency::setValue(double theAmount) {
    //给调用对象赋值
    if (theAmount < 0) {
        amount = (long)((theAmount - 0.001) * 100);
    } else {
        amount = (long)((theAmount + 0.001) * 100);
    }
}

currency currency::add(const currency &x) const {
    //把x和*this相加
    currency y;
    y.amount = amount + x.amount;
    return y;
}

void currency::output() const {
    //输出调用对象的值
    long theAmount = amount;
    if (theAmount < 0) {
        std::cout << '-';
        theAmount = -theAmount;
    }
    long dollars = theAmount / 100;         //美元
    std::cout << '$' << dollars << '.';
    int cents = theAmount - dollars * 100;  //美分
    if(cents < 10) std::cout << '0';
    std::cout << cents;
}

currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign, theDollars, theCents);
}
