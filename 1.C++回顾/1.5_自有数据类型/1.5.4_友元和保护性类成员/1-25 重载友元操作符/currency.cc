/**
 *  小节： 1.5.4_友元和保护性类成员
 *  程序： 1-25 重载友元操作符
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



std::ostream &operator<<(std::ostream &out, const currency &x){
    long theAmount = x.amount;
    if(theAmount < 0){
        out << '-';
        theAmount = -theAmount;
    }
    long dollars = theAmount / 100;         //美元
    out << '$' << dollars << '.';
    int cents = theAmount - dollars * 100;  //美分
    if(cents < 10) std::cout << '0';
    out << cents;
    return out;
}



currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign, theDollars, theCents);
}
