/**
 *  小节： 1.5.2 一种不同的描述方法
 *  程序： 1-19 类currency的新声明
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
    currency add(const currency &) const;
    currency &increment(const currency &x){
        amount += x.amount;
        return *this;
    }
    void output() const;

   private:
    long amount;
};



#endif  //__CURRENCY_H__