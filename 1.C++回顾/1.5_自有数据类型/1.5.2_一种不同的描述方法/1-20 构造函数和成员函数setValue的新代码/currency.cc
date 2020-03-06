/**
 *  小节： 1.5.2 一种不同的描述方法
 *  程序： 1-20 构造函数和成员函数setValue的新代码
*/
#include "currency.h"
#include <iostream>
using std::cout;
using std::endl;

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents){
    //给调用对象赋值
    if(theCents > 99){
        //美分值太大
        throw "Cents should be < 100";
    }
    amount = theDollars * 100 + theCents;
    if (theSign == minus)
    {
        amount = -amount;
    }

}

void currency::setValue(double theAmount){
    //给调用对象赋值
    if(theAmount < 0){
        amount = (long)((theAmount - 0.001) * 100);
    }else{
        amount = (long)((theAmount + 0.001) * 100);
    }
}


currency currency::add(const currency &x) const {
    currency result;
    return result;
}


void currency::output() const{
}


currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign,theDollars,theCents);
}
