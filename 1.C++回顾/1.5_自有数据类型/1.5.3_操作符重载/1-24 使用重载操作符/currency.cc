/**
 *  小节： 1.5.3 操作符重载
 *  程序： 1-24 使用重载操作符
*/
#include "currency.h"
#include <ostream>
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

currency currency::operator+(const currency &x) const{
    //把参数对象x和调用对象*this相加
    currency result;
    result.amount = amount + x.amount;
    return result;
}



void currency::output(std::ostream &out) const {
    //把货币值插入流out
    long theAmount = amount;
    if (theAmount < 0) {
        out << '-';
        theAmount = -theAmount;
    }
    long dollars = theAmount / 100;         //美元
    out << '$' << dollars << '.';
    int cents = theAmount - dollars * 100;  //美分
    if(cents < 10) out << '0';
    out << cents;
}

std::ostream &operator<<(std::ostream &out, const currency &x){
    x.output(out);
    return out;
}



currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign, theDollars, theCents);
}
