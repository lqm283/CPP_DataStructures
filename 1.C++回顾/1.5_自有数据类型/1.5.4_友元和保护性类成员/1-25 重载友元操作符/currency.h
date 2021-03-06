/**
 *  小节： 1.5.4_友元和保护性类成员
 *  程序： 1-25 重载友元操作符
*/

#ifndef __CURRENCY_H__
#define __CURRENCY_H__

#include <iostream>

enum signType { plus,
                minus };

class currency {
    friend std::ostream& operator<<(std::ostream &out, const currency &x);

   public:
    //构造函数
    currency(signType theSign = plus,
             unsigned long theDollars = 0,
             unsigned long theCents = 0);
    //析构函数
    ~currency() {}

    //操作函数
    void setValue(signType, unsigned long, unsigned int);
    void setValue(double);
    signType getSign() const {
        if(amount < 0) return minus;
        else return plus;
     }
    unsigned long getDollars() const {
        if(amount < 0) return (-amount) / 100;
        else return (amount / 100);
     }
    unsigned int getCents() const {
        if(amount < 0) return (-amount - getDollars() * 100);
        else return (amount - getDollars() * 100);
    }
    currency operator+(const currency &) const;
    currency operator+=(const currency &x){
        amount += x.amount;
        return *this;
    }

   private:
    long amount;
};

/* 重载<<操作符 */
std::ostream &operator<<(std::ostream &out, const currency &x);

#endif  //__CURRENCY_H__