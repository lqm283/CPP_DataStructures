/**
 *  小节： 1.5.1 类currency
 *  程序： 1-13 currency类声明
*/

#ifndef __CURRENCY_H__
#define __CURRENCY_H__

enum signType { plus,
                minus };

class currency {
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
    signType getSign() const { return sign; }
    unsigned long getDollars() const { return dollars; }
    unsigned int getCents() const { return cents; }
    currency add(const currency &) const;
    currency &increment(const currency &);
    void output() const;

   private:
    signType sign;
    unsigned long dollars;
    unsigned int cents;
};

#endif  //__CURRENCY_H__