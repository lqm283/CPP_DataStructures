/**
 *  小节： 1.5.1 类currency
 *  程序： 1-15 给私有数据成员赋值
*/
#include "currency.h"

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents){
    //给对象的数据成员赋值
    if (theCents > 99)
    {
        throw illegaParameterValue("Cents should be < 100");
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



currency::currency(signType theSign, unsigned long theDollars, unsigned long theCents) {
    //创建一个currency类对象
    setValue(theSign,theDollars,theCents);
}
