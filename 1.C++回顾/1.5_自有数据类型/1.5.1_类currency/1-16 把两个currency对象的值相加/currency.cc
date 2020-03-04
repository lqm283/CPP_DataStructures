/**
 *  小节： 1.5.1 类currency
 *  程序： 1-16 把两个currency对象的值相加
*/
#include "currency.h"

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents){
    //给对象的数据成员赋值
    if (theCents > 99)
    {
        //throw illegaParameterValue("Cents should be < 100");
    }
    sign = theSign;
    dollars = theDollars;
    cents = theCents;
}

void currency::setValue(double theAmount){
    //给对象的数据成员赋值
    if (theAmount < 0)
    {
        sign = minus;
        theAmount = -theAmount;
    }
    else
    {
        sign = plus;
    }
    dollars = (unsigned long) theAmount;                            //提取整数部分
    cents = (unsigned int) ((theAmount + 0.001 - dollars) * 100);   //提取小数部分
}


currency currency::add(const currency &x) const {
    //把x的值和this相加
    long a1,a2,a3;
    currency result;
    //把调用的对象转换为有符号整数
    a1 = dollars*100 + cents;
    if (sign == minus)
    {
        a1 = -a1;
    }

    //把x转换为有符号整数
    a2 = x.dollars*100 + x.cents;
    if (x.sign == minus)
    {
        a2 = -a2;
    }

    a3 = a1 + a2;

    //转换为currency对象的表达形式
    if(a3 < 0){
        result.sign = minus;
        a3 = -a3;
    }else{
        result.sign = plus;
    }
    result.dollars = a3 / 100;
    result.cents = a3 - result.dollars * 100;


    return result;
}


currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign,theDollars,theCents);
}
